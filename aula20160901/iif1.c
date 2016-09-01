#include <stdio.h>
#include <stdlib.h>  //RAND_MAX
#include <float.h>
#include <time.h>
int main()
{
    srand(time(0));
    int i = 0;
    if (1.0 > 1.0 - DBL_EPSILON/4.0)
            printf("Maior\n");
    else
            printf("Igual! delta - %1e\n ", DBL_EPSILON/4.0);
            for (i = 0; i < 10; i++)
                printf("%g\n", (float)rand()/(float)RAND_MAX);
return 0;
}
