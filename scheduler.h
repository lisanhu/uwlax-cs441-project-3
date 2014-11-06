/*
 * Author: Sanhu Li
 *
 * CS 441/541: CPU Scheduler (Project 3)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


/******************************
 * Defines
 ******************************/
#define MYTURN 0
#define MYWAIT 1
#define FCFS    1
#define SJF     2
#define PRI     3
#define RR      4


/******************************
 * Structures
 ******************************/
typedef struct {
    int id;
    int burst;
    int priority;
    int waiting;
    int turnaround;
    int remain;
} process;


/******************************
 * Global Variables
 ******************************/


/******************************
 * Function declarations
 ******************************/
void schedule_FCFS(process *ps, int len);
void schedule_SJF(process *ps, int len);
void schedule_Priority(process *ps, int len);
void schedule_RR(process *ps, int len, int quantum);

void print_args_info(int which, int quantum, char *filename);
void print_dashes();
void print_ps_info(process *ps, int len);
void print_schedule_info(process p);

void calculate_process(int *current, process *p);

void calculate_rr_process(int *current, process *p, int quantum);
process process_build(int id, int burst, int pri, int w, int t);
double calculate_aver(process *processes, int len, int which);
void swap(process *p1, process *p2);
int next_idx(int idx, int max);
void usage();
