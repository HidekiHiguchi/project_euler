#include <stdio.h>

int multiplies(int m1, int m2, int limit)
{
    int m1b = 0, m2b = 0;
    int sum = 0;
    int count = 0;
    while(1)
    {
        count++;
        printf("\ncount= %d\n",count);
        //printf("\nm1=%d\nm2=%d\n",count*m1,count*m2);
        if(m1*count < limit)
        {
            sum += m1*count;
            printf("m1 = %d\n",m1*count);
        }
        else {
            m1b = 1;
        }
        if(m2*count % m1 != 0)
        {
            if(m2*count < limit)
            {
                sum += m2*count;
                printf("m2 = %d\n",m2*count);
            }
            else {

                m2b = 1;
            }
            printf("sum: %d\n",sum);
            //printf("sum = %d\n",sum);
            if(m1b == 1 && m2b == 1)
             break;
        }
    }
    return sum;
}

int main()
{
    int res;
    res = multiplies(3,5,1000);
    printf("\n%d\n",res);
    return 0;
}

