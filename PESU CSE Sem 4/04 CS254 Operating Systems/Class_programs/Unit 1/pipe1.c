#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int fd[2],fd1[2];
char buf[12],buf1[7];
int pid;
pipe(fd);
pipe(fd1);
pid=fork();
if(pid<0)
{
printf("error\n");
exit(1);
}
else if(pid==0)
{
close(fd[0]);
write(fd[1],"I am child\n",12);
read(fd1[0],buf1,7);
write(1,buf1,7);
}
else
{
close(fd[1]);
read(fd[0],buf,12);
write(fd1[1],"parent\n",7);
write(1,buf,12);

}
return 0;
}
