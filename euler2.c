#include <stdio.h>

int getFibonacciEvenSum(int a, int b, int limit, int sum)
{

    printf("%d\n", a);
    if(a % 2 == 0)
        sum += a;
    
    if(b > limit)
    {
        if(b % 2 == 0)
            return sum+b;
        else
            return sum;
    }

    return getFibonacciEvenSum(b,a+b,limit,sum);
}

int main()
{
    int r = getFibonacciEvenSum(1,2,4000000,0);
    printf("\n\n%d\n", r);
    return 9;
}
