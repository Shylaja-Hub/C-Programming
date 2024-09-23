#include <stdio.h>
int main()
{
    int i;
    printf("odd numbers between 35 to 45\n");

    for (i=35;i<=45;i++)
    {
        if(i%2)
        {
            printf("%d\n",i);
        }
    }
}
