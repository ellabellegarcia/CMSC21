#include <stdio.h>

int main(void){

    // Variable declaration
    int n, num1,num2,num3, reverse ;

    // Get input from user
    printf("Please enter a 3-digit number: ");
    scanf("%3d", &n);

    // Calculations: n = 123 
    num1 = n / 100;                                     // 123/100 = 1                       
    num2 = (n % 100) / 10;                              // (123%100)/10 = 23/10 = 2
    num3 = n%10 ;                                       // 123%10 = 3
    reverse = (100 * num3) + (10 * num2) + num1;        // 300 + 20 + 1 = 321

    // If the input ends with 0 the reverse should start with 0
    if (num3 == 0)
    {
        printf("Reverse: %d%d%d\n", num3, num2, num1); //if n=120, reverse = 021
    }
    else
    {
        printf("Reverse: %3d\n", reverse);
    }
    
    return 0; 

}


