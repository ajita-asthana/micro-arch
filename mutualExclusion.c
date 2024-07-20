/**
 * Peterson's Algorithm for mutual exclusion 
**/

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdbool.h>

#define FALSE 0
#define TRUE 1
#define N 2 		/* number of processes */

bool interested[2] = {false, false}; /* all values initially set to false */
int turn;	/* whose turn is it */

//The Critical Section Function
void critical_section(int process_id) {
	printf("Process %d is in the critical section of memory.\n", process_id);
	sleep(1); //Simulate some work in the critical section
	printf("Process %d is leaving the critical section of memory. \n", process_id);
}

void enter_region(int process) /* process is 0 or 1 */
{
	int other; /* Number of the other process */
	other = 1 - process; /* the opposite of process */
	interested[process] = true; /* show that you are interested */
	turn = process; /* set flag */
	while(turn == process && interested[other] == true) {
		//Busy Wait
	}
}

void leave_region(int process) /* process who is leaving */
{
	interested[process] = false; /* indicate departure from critical region */
}

//Thread function for process P0
void* process_0(void* arg) {
	for(int i=0; i<5; i++) {
		enter_region(0);
		critical_section(0);
		leave_region(0);
		sleep(1); //Simulate some delay before trying to enter critical section again
	}
	return NULL;
}

//Thread function for process P1
void* process_1(void* arg) {
	for(int i=0; i<5; i++)
	{
		enter_region(1);
		critical_section(1);
		leave_region(1);
		sleep(1); //Simulate some delay before trying to enter critical section again
	}
	return NULL;
}

int main() {
	pthread_t t0, t1;

	// Create two threads for P0 and P1
	pthread_create(&t0, NULL, process_0, NULL);
	pthread_create(&t1, NULL, process_0, NULL);

	//Wait for both threads to finish
	pthread_join(t0, NULL);
	pthread_join(t1, NULL);

	return 0;
}

/**
 * Process 0 calls enter_region(0) 
 * 			indicates its interest by setting the array variable
 * 			and marking turn as 0
 * 			other is process 1 
 * 			since process 1 is not interested 
 * 			enter_region(0) returns immediately
 * 			if process 1 makes call to enter_region it will
 * 			hang there unless process 0 calls leave_region
 **/
