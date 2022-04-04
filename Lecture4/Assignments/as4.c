#include<stdio.h>

int main(void)
{
    int i, pow_n;
    
    printf("\nTABLE OF POWERS OF TWO");
    printf("\n======================");
    printf("\n  n     2 to power n");
    printf("\n-----  ---------------");
    for (i = 0; i <= 10;  ++i)
    {
        if (i == 0)
        {
            pow_n = 1;
        }
        else
        {
            pow_n *= 2;
        }
        printf("\n  %d\t    %d", i, pow_n);
    }
    printf("\n======================\n");

    return 0;
}

