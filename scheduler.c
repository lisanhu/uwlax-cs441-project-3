/*
 * Author: Sanhu Li
 *
 * CS 441/541: CPU Scheduler (Project 3)
 */
#include "scheduler.h"

int main(int argc, char **argv) {
    int s = 0, q = 0;
    int n;
    char filename[100];
    int s_idx = -1, q_idx = -2, fn_idx = -1;
    int pid, pburst, ppri;
    int i;
    process *ps;

    if (argc != 4 && argc != 6) {
        usage();
    } else {
        for (i = 1; i < argc; ++i) {
            if (!strcmp("-s", argv[i])) {
                s_idx = i;
                s = strtol(argv[i + 1], NULL, 10);
            }

            if (!strcmp("-q", argv[i])) {
                q_idx = i;
                q = strtol(argv[i + 1], NULL, 10);
            }
        }

        for (i = 1; i < argc; ++i) {
            if (i != s_idx && i != s_idx + 1 && i != q_idx && i != q_idx + 1) {
                fn_idx = i;
            }
        }

        strcpy(filename, argv[fn_idx]);

        print_args_info(s, q, filename);

        FILE *fd = fopen(filename, "r");
        if (NULL != fd) {
            fscanf(fd, "%d\n", &n);

            ps = (process *) malloc(sizeof(process) * n);

            for (i = 0; i < n; ++i) {
                fscanf(fd, "%d %d %d\n", &pid, &pburst, &ppri);
                ps[i] = process_build(pid, pburst, ppri, 0, 0);
            }

        }

        print_ps_info(ps, n);

        switch (s) {
            case FCFS:
                schedule_FCFS(ps, n);
                break;
            case SJF:
                schedule_SJF(ps, n);
                break;
            case PRI:
                schedule_Priority(ps, n);
                break;
            case RR:
                schedule_RR(ps, n, q);
                break;
            default:
                usage();
                break;
        }
    }

    return 0;
}

void calculate_process(int *current, process *p) {
    p->waiting = *current;
    p->turnaround = *current + p->burst;
    p->remain = 0;
    *current += p->burst;
}

void calculate_rr_process(int *current, process *p, int quantum) {

    if (0 == p->remain) {
        return;
    }

    if (p->remain > quantum) {
        p->remain -= quantum;
        *current += quantum;
    } else if (p->remain <= quantum) {
        *current += p->remain;
        p->remain = 0;
        p->turnaround = *current;
        p->waiting = p->turnaround - p->burst;
    }
}

void schedule_FCFS(process *ps, int len) {
    int current = 0;
    int i, j;

    printf("Running...\n");

    for (i = 0; i < len; ++i) {
        calculate_process(&current, ps + i);
    }

    printf("##################################################\n");
    printf("#  #\tCPU\tPri\tW\tT\n");

    for (j = 0; j < len; ++j) {
        print_schedule_info(ps[j]);
    }

    printf("##################################################\n");
    printf("# Avg. Waiting Time   :\t%.2lf\n", calculate_aver(ps, len, MYWAIT));
    printf("# Avg. Turnaround Time:\t%.2lf\n", calculate_aver(ps, len, MYTURN));
    printf("##################################################\n");

}

void schedule_SJF(process *ps, int len) {
    int current = 0;
    int i, j;

    printf("Running...\n");

    for (i = 0; i < len - 1; ++i) {
        for (j = 0; j < len - i - 1; ++j) {
            if (ps[j].burst > ps[j + 1].burst) {
                swap(&ps[j], &ps[j + 1]);
            }
        }
    }

    for (i = 0; i < len; ++i) {
        calculate_process(&current, ps + i);
    }

    printf("##################################################\n");
    printf("#  #\tCPU\tPri\tW\tT\n");

    for (j = 0; j < len; ++j) {
        print_schedule_info(ps[j]);
    }

    printf("##################################################\n");
    printf("# Avg. Waiting Time   :\t%.2lf\n", calculate_aver(ps, len, MYWAIT));
    printf("# Avg. Turnaround Time:\t%.2lf\n", calculate_aver(ps, len, MYTURN));
    printf("##################################################\n");
}

void schedule_Priority(process *ps, int len) {
    int current = 0;
    int i, j;

    printf("Running...\n");

    for (i = 0; i < len - 1; ++i) {
        for (j = 0; j < len - i - 1; ++j) {
            if (ps[j].priority > ps[j + 1].priority) {
                swap(&ps[j], &ps[j + 1]);
            }
        }
    }

    for (i = 0; i < len; ++i) {
        calculate_process(&current, ps + i);
    }

    printf("##################################################\n");
    printf("#  #\tCPU\tPri\tW\tT\n");

    for (j = 0; j < len; ++j) {
        print_schedule_info(ps[j]);
    }

    printf("##################################################\n");
    printf("# Avg. Waiting Time   :\t%.2lf\n", calculate_aver(ps, len, MYWAIT));
    printf("# Avg. Turnaround Time:\t%.2lf\n", calculate_aver(ps, len, MYTURN));
    printf("##################################################\n");
}

void schedule_RR(process *ps, int len, int quantum) {
    int current = 0;
    int total = 0;
    int idx = len - 1;
    int i, j;

    printf("Running...\n");

    for (i = 0; i < len; ++i) {
        total += ps[i].burst;
    }

    while (current < total) {
        idx = next_idx(idx, len - 1);
        calculate_rr_process(&current, &ps[idx], quantum);
    }

    printf("##################################################\n");
    printf("#  #\tCPU\tPri\tW\tT\n");

    for (j = 0; j < len; ++j) {
        print_schedule_info(ps[j]);
    }

    printf("##################################################\n");
    printf("# Avg. Waiting Time   :\t%.2lf\n", calculate_aver(ps, len, MYWAIT));
    printf("# Avg. Turnaround Time:\t%.2lf\n", calculate_aver(ps, len, MYTURN));
    printf("##################################################\n");
}

void print_args_info(int which, int quantum, char *filename) {
    char alg[20];
    switch (which) {
        case FCFS:
            sprintf(alg, "%d %s", which, "FCFS");
            break;
        case SJF:
            sprintf(alg, "%d %s", which, "SJF");
            break;
        case PRI:
            sprintf(alg, "%d %s", which, "Priority");
            break;
        case RR:
            sprintf(alg, "%d %s", which, "RR");
            break;
    }

    printf("Scheduler   :  %s\n", alg);
    printf("Quantum     :  %d\n", quantum);
    printf("Sch. File   : %s\n", filename);
    print_dashes();
}

void print_dashes() {
    printf("-------------------------------\n");
}

void print_ps_info(process *ps, int len) {
    int i, j;
    if (len >= 1) {
        printf("Arrival Order:%3d", ps[0].id);
        for (i = 1; i < len; ++i) {
            printf(",%3d", ps[i].id);
        }
        printf("\n");

        printf("Process Information:\n");
        for (j = 0; j < len; ++j) {
            printf(" %d\t%d\t%d\n", ps[j].id, ps[j].burst, ps[j].priority);
        }

        print_dashes();
    }
}

void print_schedule_info(process p) {
    printf("#  %d\t%d\t%d\t%d\t%d\n", p.id, p.burst, p.priority, p.waiting, p.turnaround);
}

process process_build(int id, int burst, int pri, int w, int t) {
    process result;
    result.id = id;
    result.burst = burst;
    result.priority = pri;
    result.waiting = w;
    result.turnaround = t;
    result.remain = burst;
    return result;
}

double calculate_aver(process *processes, int len, int which) {
    int sum = 0, i, j;
    double aver = 0;
    switch (which) {
        case MYTURN:
            for (i = 0; i < len; ++i) {
                process p = processes[i];
                sum += p.turnaround;
            }
            aver = sum / (double) len;
            break;
        case MYWAIT:
            for (j = 0; j < len; ++j) {
                process p = processes[j];
                sum += p.waiting;
            }
            aver = sum / (double) len;
            break;
        default:
            break;
    }
    return aver;
}

void swap(process *p1, process *p2) {
    process tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int next_idx(int idx, int max) {
    if (idx == max) {
        return 0;
    } else {
        return idx + 1;
    }
}

void usage() {
    printf("Usage:\n");
    printf("./scheduler -s [algorithm] [-q quantum]\n");
}
