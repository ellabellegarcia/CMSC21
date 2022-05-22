#include <stdio.h>

int  sum(void){
    printf("%s", "Enter three integers: ");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int total = a + b + c;
    printf("Result is %d", total);
    return total;
}


int main(){
    sum();
    return 0;
}
