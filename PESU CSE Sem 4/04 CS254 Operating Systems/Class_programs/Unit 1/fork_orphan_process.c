// program to demonstrate orphan process
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main()
{
pid_t pid;
pid=fork();
if(pid<0)
{
printf("error\n");
exit(1);
}
else if(pid==0)
{
sleep(5);
printf("child\n");
printf("pid=%d, ppid=%d\n",getpid(),getppid()); 
exit(1);
}
else
{
//sleep(5);
printf("parent\n");
printf("pid=%d, ppid=%d\n",getpid(),getppid());
exit(1);
}
return 0;
}
