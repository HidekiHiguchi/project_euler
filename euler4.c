#include <stdio.h>

int biggestPalindrome()
{
    int a = 999;
    int b = 999;
    int max = 0;
    int tmp = 0, tmp2 = 0, tmp3 = 0;

    for(a; a > 0; a--)
    {
        for(b; b > 0; b--)
        {
          tmp = a * b;
          printf("%d * %d = ",a,b);
          int count = 1;
          int count_tmp = tmp;
          tmp3 = tmp;
          while (1)
          {
              if(count_tmp > 9)
              {
                count *= 10;
                count_tmp = count_tmp / 10;
              } else {
                  break;
              }

          }
          while (1)
          {
            tmp2 += (tmp % 10) * count;
            tmp = tmp / 10;
            count = count / 10;
            if(tmp < 10)
            {
                tmp2 += tmp;
                break;
            }
          }
         
          printf("tmp2 = %d\n",tmp2);

          if(tmp2 == tmp3 && tmp2 > max)
              max = tmp2;

          tmp2 = 0;
        }
        printf("here we go again\n");

        b = 999;
    }
    return max;
}

int main()
{
  int a =  biggestPalindrome();
  printf("\nbiggest is: %d\n",a);
  return 0;
}
