#include <unistd.h>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
     char *s, buf[1024];
     int fds[2],fd[2];
     s = "child:Hi\n";
     char *p="parent:Hello\n";
     char bufp[1024];

     pipe(fds);
     pipe(fd);
     if (fork() == 0) {
         printf("child process writing: \n");
         close(fd[1]);
         close(fds[0]);
         write(fds[1], s, 10); 
         read(fd[0], bufp, 13);
        printf("child read from----%s\n",bufp);
        }
else
{ 
  printf("parent process reading\n");
close(fds[1]);
     read(fds[0], buf,10);
     write(fd[1], p,13	);
     printf("parent read from-----%s\n",buf);
}
close(fds[0]);
close(fd[1]);
}
