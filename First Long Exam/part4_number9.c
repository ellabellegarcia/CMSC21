#include <stdio.h>
int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    while(cont = 'y'){
        printf("Enter square size:");
        scanf("%d", &size);
        
        /* Row iterator for loop */
        for( row = 0 ;row < size ; row++){
            /* Column iterator for loop */
            for(column = 0 ; column < size ; column++){
                /* Check if current position is a boundary position */
                if(row == 0|| row==size-1 || column==0 || column==size-1){
                    printf("*");
                }else{
                printf(" ");
                }
            }
            printf("\n");
        }

        /* Ask the user to try again */
        printf("Print another square? Enter y or n: ");
        scanf(" %c", &cont);
        if (cont == 'n'){
            printf("END");
        }else if (cont != 'n' && cont != 'y'){
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y/n: ");
            scanf(" %c", &cont);
        }
    }
    return 0;
}
