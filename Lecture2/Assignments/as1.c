#include <stdio.h>

int main(void){

    // Variable declaration
    int n, digit1,digit2, reverse ;

    // Get input from user
    printf("Please enter a 2-digit number: ");
    scanf("%2d", &n);

    // Calculations: n = 45
    digit1 = n / 10;                        // 45/10 = 4
    digit2 = n % 10;                        // 21%10 = 5
    reverse =  (10 * digit2) + digit1;      //(10 * 5) + 4 = 50 + 4 = 54

    // If the input ends with 0 the reverse should start with 0
    if (digit2 == 0)
    {
        printf("Reverse: %d%d\n", digit2, digit1);  // if n = 20, reverse = 02
    }
    else
    {
        printf("Reverse: %d\n", reverse);       
    }
    
    return 0; 
}


