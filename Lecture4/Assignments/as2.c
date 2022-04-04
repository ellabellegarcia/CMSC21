#include <stdio.h>

int main(void)
{
    int i;
    i = 1;
    
    printf("While Loop\n");
    while (i < 10) {
        printf("%d ", i);
        i++;
    }

    printf("\nFor Loop\n");
    for (i = 1; i < 10; i++)
    {
        printf("%d ", i);
    }
    
    printf("\nDo-while Loop\n");
    do
    {
        printf("%d \n", i);
        i++;
    } while (i < 10);
    
    
    return 0;
}

