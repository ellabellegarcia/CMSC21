#include <stdio.h>

int main(void)
{
    int days, first_day, week_day, day_count;
    char retry;

    do
    {
        printf("\n************ One-Month Calendar Generator ************");
        printf("\nEnter number of days in month: ");
        scanf("%d", &days);

        // check if the entered value for the number of days is valid  
        if (days > 31 || days < 28)
        {
            printf("Input error: The entered number of days is invalid!\n");
        }
        else
        {
            printf("Enter starting day of the week (1=Sun, 7=Sat): ");
            scanf("%d", &first_day);
            printf("\n");

            // check if the entered value for starting day of the week is valid 
            if (first_day > 7 || first_day < 1)
            {
                printf("Input error: The input should be from 1 to 7! \n");
            }
            else
            {
                printf("  One-Month Calendar\n----------------------\n");
                printf(" Su Mo Tu We Th Fr Sa\n");
                /* printing the blank days of the first week */
                for (week_day = 1; week_day < first_day; week_day++) 
                {
                    printf("   ");
                }

                /* printing the calendar numbers */
                for (day_count = 1; day_count <= days; week_day++, day_count++) 
                {
                    printf("%3d", day_count);
                    if (week_day % 7 == 0)
                        printf("\n");
                }
                printf("\n\n");
            }  
        }
        /* Asks the user to try again */
        printf("\nDo you want to try again? (y or n): "); 
        scanf(" %c", &retry); 
    } while (retry == 'y' || retry == 'Y');

    printf("Thank you for using this program!\n");

    return 0;
}