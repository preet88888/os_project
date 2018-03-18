#include<stdio.h>
#include <stdlib.h>
int main()
{
	int process[25], burst_time[25], queue_type[25], waiting_time[25], turnaround_time[25];
	int i, k, no_of_processes, temp;
	float waiting_avg, turnaround_avg;
	char ch;
	int ti;

	time_t t;
    time(&t);
    printf("\nCurrent date and time is : %s",ctime(&t));
    printf("\nIf it is correct then input only time in 24-hr format that does not include min and sec\n");
    scanf("%d",&ti);
    if((ti!=10)&(ti!=11)&(ti!=12)){
	
    	printf("\nSorry! you can only login between 10AM to 12PM\n");
    	exit(0);
    }
	printf("------------------------------WELCOME------------------------------------\n");
	printf("Enter the Total No of Processes u want: ");
	scanf("%d", &no_of_processes);
	for (i = 0; i < no_of_processes; i++) {
		process[i] = i;
		printf("Please Enter the Burst Time of the Process %d : ", i);
		scanf("%d", &burst_time[i]);
		printf("Press 0 for student queue and 1 for Faculty queue: ");
		scanf("%d", &queue_type[i]);
	}

	system("cls");
