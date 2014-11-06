# CS# CS441/541

## Project 3 Documentation

**Author:**
*Sanhu Li, Huifeng Zhang*

## Summary

This software is the solution for Project 3.

It simulates the problem described below.

### Problem Summary

This program is a CPU scheduling simulator which can process according to user input file and commands to decide priorities, processes, processors and scheduling algorithms.

## How to build

	make

To remove the application, please use:

    make clean
## How to use

	$ ./scheduler [quantum #]"schedulerAlgorithm" "#" "filePath"

"schedulerAlgorithm" denoting those scheduler algorithms implemented and predefinded as "-s", and "#" denotes which algorithms will be chose:

1 is First-Come, First-Served (FCFS);

2 is Shortest-Job First (SJF);

3 is Priority;

4 is Round-Robin (RR);

Also, quantum # is defined meaningful only if -s 4 is chosen, user can decide the quantum to use, by inputing -q # while "#" denotes the number;

## Example
```
	./scheduler -s 1 given-tests/level3.txt
```
This example runs selecting scheduling algorithm FCFS, and using file with path "given-tests/level3.txt" as to be processed file.

The output generated as below:

```
Scheduler   :  1 FCFS
Quantum     :  0
Sch. File   : given-tests/level3.txt
-------------------------------
Arrival Order:  4,  2,  3,  1
Process Information:
 4	3	7
 2	3	10
 3	5	7
 1	7	1
-------------------------------
Running...
##################################################
#  #	CPU	Pri	W	T
#  4	3	7	0	3
#  2	3	10	3	6
#  3	5	7	6	11
#  1	7	1	11	18
##################################################
# Avg. Waiting Time   :	5.00
# Avg. Turnaround Time:	9.50
##################################################
```

Another example:

```
	./scheduler -q 3 test.txt -s 4
```

This example runs selecting scheduler algorithm RR, and using file with path ./test.txt, as using RR, input parameter specifies the quantum 3 is used.

The output generated as below:
```
Scheduler : 4 RR
Quantum : 3
Sch. File : given-tests/level3.txt -------------------------------
Arrival Order: 4, 2, 3, 1
Process Information:
437 2 3 10 357 171
-------------------------------
Running... ################################################## ## CPU Pri W T #43703
#2 3 10 3 6
#3 5 7 9 14
#1 7 1 11 18 ################################################## # Avg. Waiting Time : 5.75
# Avg. Turnaround Time:  10.25
##################################################
```

## Test
Test Strategy:

1. Basicly is to test if each algorithm can work properly, using wrong command to see if generating error message.
2. To test if the program can work properly to satisfy the requirements that it handles process identifiers not contiguous correctly.
3. To test if the program can identify correct parameters in command by change the order of input.

Written test files in folder tests and corresponding check files.

Test Command:

1) To use exsiting test files:
```
make check
```
2) To use customized test files:
```
make mycheck
```
## Known Bugs and Program Areas

Not found currently. Of course there're bugs, but I really don't know right now.

If you find any bug, please report to [li.sanh@uwlax.edu](mailto:li.sanh@uwlax.edu) or [zhang.huif@uwlax.edu](mailto:zhang.huif@uwlax.edu)
