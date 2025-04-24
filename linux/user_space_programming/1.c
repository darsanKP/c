/*
*  Write a C program that:
*
*  Creates a child process using fork().
*  In the child process, call execve() to run a command (e.g., ls or pwd).
*  In the parent process, wait for the child to finish using wait().
*  Print the process IDs of both the parent and the child.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#define FAIL -1

int main()
{
	pid_t check=FAIL;
	check = fork();
	if(check==-1)
	{
		printf("ERROR in creatig process exit\n");
		exit(-1);
	}
	else if(check==0)
	{
		printf("Inside CHILD process with pid %u of parent  %u \n",getpid(),getppid());

	// Arguments for execve — note: argv[0] is usually the program name
        	char *argv[] = {"/bin/ls", "-lrth", NULL};
		char *envp[] = {NULL}; // Inherit current environment

        // Execute "pwd"
        if (execve("/bin/ls", argv, envp) == -1) {
            perror("execve failed");
            exit(EXIT_FAILURE);

	}
	}
	else if(check>0)
	{
		printf("Inside PARNET process with pid %u \n",getpid());
		wait(NULL);
	}
		return 0;
}

