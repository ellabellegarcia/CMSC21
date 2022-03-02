#include <stdio.h>

int main(void)
{
    // Initialization
    int i;
    float x;
    i = 40;
    x = 839.21f;


    /* 
    ---------------------- Prints int values in various formats  ---------------------- 
    %d - displays i in decimal form
    %5d - displays i in deci1nal form. using a minimum of 5 characters
    %-5d - i is left-justified in a field of length 5
    %5.3d - using a minimum of 5 characters overall and a minin1um of 3 digits
    */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);


    /* 
    --------------------- Prints float values in various formats --------------------- 
    %10.3f - displays x in fixed decimal form, 10 characters, 3 decimal places
    %10.3e - displays x in fixed decimal form, 10 characters, 3 decimal places
    %10g - displays x in either fixed decimal form or exponenlial form, 10 characaters
    */ 
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}



