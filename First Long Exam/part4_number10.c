#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y_n, y = 1 ;
    int stop = 0;

    /* Take the value of x from the user */
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    /* loop to iterate until the absolute value of y𝑛+1 − y is less than or equal to 
    the tolerance, given by the variable tol = 0.00001. */
    do {
        // Computing the square (iterative method)
        y_n = ((y + (x / y)) / 2);

        /* Check  if difference between old y and new y less is less than 
        the tolerance */
        if (fabs(y_n - y) <= (.00001 * y))
            stop = 1;
        
        // store new value of y in the old value for the next iterarion
        y = y_n;     
    } while (stop != 1);

    /* Print the square root of x */
    printf("Square root: %.5f\n", y_n);

    return 0;
}