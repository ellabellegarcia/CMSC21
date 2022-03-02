#include <stdio.h>

int main(void)
{
    // Initialization
    int num1, denom1, num2, denom2, result_num, result_denom;

    // Get user input with format: numerator/denominator
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter seconf fraction: ");
    scanf("%d/%d", &num2, &denom2);

    // Add two fractions
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // Result
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}