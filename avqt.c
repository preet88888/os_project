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

	printf("\n\nThese are Student Processes\n");
	printf("\nPROCESS NO\tBURST TIME");
	for (i = 0; i < no_of_processes; i++) {
		if (queue_type[i] == 0) {
			printf("\n%d \t\t %d ", process[i], burst_time[i]);
		}
	}

	printf("\n\nThese are Faculty Processes\n");
	printf("\nPROCESS NO\tBURST TIME");
	for (i = 0; i < no_of_processes; i++) {
		if (queue_type[i] == 1) {
			printf("\n%d \t\t %d ", process[i], burst_time[i]);
		}
	}
	printf("\n\nPress enter to view result");
	getchar();
	getchar();
	system("cls");

	for (i = 0; i < no_of_processes; i++)
		for (k = i + 1; k < no_of_processes; k++)
			if (queue_type[i] > queue_type[k]) {
				temp = process[i];
				process[i] = process[k];
				process[k] = temp;
				temp = burst_time[i];
				burst_time[i] = burst_time[k];
				burst_time[k] = temp;
				temp = queue_type[i];
				queue_type[i] = queue_type[k];
				queue_type[k] = temp;
			}

