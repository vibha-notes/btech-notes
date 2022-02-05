:#include<stdio.h>
#include<unistd.h>
//#include<ipc.h>
#include<stdlib.h>
int main()
{
int fd[2];
char buf[6];
pipe(fd);
write(fd[1],"hello\n",6);
read(fd[0],buf,6);
write(1,buf,6);
return 0;
}
