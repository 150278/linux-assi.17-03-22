//Abhishek sahu
//4.A processs using execl() system call should replace a new command line program.




#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("This is the program for replacing new command line program\n");

	execl("/bin/ls", "ls", "-lh", "-a" , 0);


	return 0;
}