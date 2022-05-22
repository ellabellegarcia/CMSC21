#include <stdio.h>

int product (int a, int b)
{
    int result = a * b;
    return result;
}


int main(){
    printf("%d", product (5, 3));
    return 0;
}
