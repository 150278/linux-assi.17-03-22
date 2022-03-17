/*1.Test whether the process(exec() system call) that replaces old program data , will inherit
the fd&#39;s or not.
name Abhishek sahu
*/



#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    printf("PID of L1a.c = %d\n", getpid());
    char *args[] = {"linux", "C" , "programming", NULL};
    execv("./L1b",args);
    printf("back L1a.c");
    
    return 0;
}    