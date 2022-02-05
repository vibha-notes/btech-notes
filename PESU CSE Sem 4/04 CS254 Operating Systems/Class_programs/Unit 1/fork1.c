//program to demonstrate fork () and copy of data given to child process 
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
pid_t pid;
int var=30;
int g=20;
pid=fork();
if(pid<0)
{
printf("forking error\n");
exit(0);
}
else if(pid==0)
{
//sleep(2);
printf("child process:%d,parentid=%d\n",getpid(),getppid());
exit(0);
}
else
{
sleep(6);
printf("parent process\n");
//exit(0);
}
return 0;
}


