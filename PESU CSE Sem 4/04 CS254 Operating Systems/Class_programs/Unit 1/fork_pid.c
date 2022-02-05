// Program to demonstrate fork, exec,printing prcess and parent process id's
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
int pid;
int status;
pid=fork();
if(pid<0)
{
  printf("fork failer\n");
   exit(1);
}
else if(pid==0)
  {
     printf("child process\n");
      //printf("id of parent=%d, id of child=%d\n",getppid(),getpid());
       execl("/root/ex21","ex23",NULL);
        printf("exec\n");
}
else
   {
      wait(&status);
      printf("parent process\n");
     printf("id parent=%d,id of child=%d\n",getpid(),pid);
}
return  0;
}

