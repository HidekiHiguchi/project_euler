#include <stdio.h>
#include <sys/resource.h>
int smallestDiv(int max, int num)
{
    printf("num = %d\n",num);
    int check = 0;
    int i;
    for(i = 1; i <= max; i++)
    {
        if(num % i != 0)
            check = 1;
    }
    if(check == 0)
        return num;

    return smallestDiv(max, num+2);
}


int main()
{
    struct rlimit lim = {9999999999,9999999999};
    setrlimit(RLIMIT_STACK, &lim);

    printf("%d\n",smallestDiv(20, 2));
    return 0;
}
