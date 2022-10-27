#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    pid_t child = fork();
    if (child == 0)
    { /* soy hijo */
        printf(" soy el hijo (%d, hijo de %d) \n", getpid(),
               getppid());
    }
    else
    { /* soy padre */
        printf(" soy el padre (%d, hijo de %d) \n", getpid(),
               getppid());
    }
    return 0;
}