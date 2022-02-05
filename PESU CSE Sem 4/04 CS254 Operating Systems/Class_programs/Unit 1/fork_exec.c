//program to demonstrate fork wth execl
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main( void ) {


	int pid = fork();

	if ( pid == 0 ) {
		//execlp( "ls","ls",NULL);
               execlp("ls","ls","-l",NULL);//(char *)0
                printf("after exec\n");
	}
        else{
	wait(NULL);

	printf( "Finished executing the parent process\n");
            }
	return 0;
}
