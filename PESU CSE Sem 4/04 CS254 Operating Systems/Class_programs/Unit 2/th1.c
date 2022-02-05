
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
int a[10];
void *PrintHello(void *n)
{
int var;
var = (int)n;
printf("Hello World! It's me, thread %d\n",var);
pthread_exit(NULL);
}
//int a[10];
int main (int argc, char *argv[])
{
pthread_t tid;
int n=9;
int rc;
rc = pthread_create(&tid, NULL, PrintHello,(void *)n);
if (rc){
printf("ERROR; return code from pthread_create() is %d\n", rc);
exit(1);
}
pthread_join(tid,NULL);
/* Last thing that main() should do */
pthread_exit(NULL);
}
