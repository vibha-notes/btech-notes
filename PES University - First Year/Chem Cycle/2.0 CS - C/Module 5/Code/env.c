#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char *env_str;
    char *new_env = "NAME=ANAND";

    if ((env_str = getenv ("TEMP")) == NULL)
    {
        printf ("Unable to get the env variable TEMP\n");
        exit (1);
    }
    printf ("TEMP=%s\n", env_str);
    if (putenv (new_env) == 0)
        printf ("Succeeded\n");

    if ((env_str = getenv ("NAME")) == NULL)
    {
        printf ("Unable to get the env variable TEMP\n");
        exit (1);
    }
    printf ("NAME=%s\n", env_str);
    return 0;
}
