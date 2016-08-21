#include <stdio.h>
#include <stdint.h>
#include <math.h>

int largestPrimeFactor(uint64_t num)
{
    int i,j;
    int sq = sqrtl(num);
    int sq2;

    printf("\n%d\n",sq);

    for (i = sq; i > 1; i--)
    {
        sq2 = sqrt(i);
        for(j = sq2; j > 0; j--)
        {
            if(j == 1)
            {
                printf("is prime: %d\n",i);

                if(num % i == 0)
                    return i;
            }

            if(i % j == 0 && j != i)
                break;        
        }
    }

    return -1;
}

int main()
{
    uint64_t num = 600851475143;
    int p = largestPrimeFactor(num);
    printf("largest prime factor is %d\n",p);
    return 0;
}
