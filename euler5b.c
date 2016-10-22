#include <stdio.h>
int lowestMultipleOptimized(int range[], lenght)
{
    int hasDivisible = 1;
    int count = 1;
    int aux = 0;
    int result = 0;
    int i;
    while(1)
    {
        count++;

        for(i = 0; i < lenght; i++)
        {
            if(range[i] % count == 0)
            {
                aux = count;
            } else {
                printf("fuck");
            }

        }

    }
}

int main ()
{
    int length = 10;
    int range[lenght];
    int i;
    for(i = 1; i <= lenght; i++)
    {
        range[i] = i;

    }

    printf("%d\n",lowestMultipleOptimized(range,length));   

}
