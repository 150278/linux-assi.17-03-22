//Abhishek sahu
//q3
//3. A program that replaces old program with new program data and is expected to display
//the currently running processes in a hierarchical tree format.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	
	printf("In the current process, pid is: %d\n",getpid());

	printf("Replacing old program with new data by using execl() system call\n");
	execl("/usr/bin/pstree", "pstree", 0);

	printf("Exiting main program\n");

	return 0;
}