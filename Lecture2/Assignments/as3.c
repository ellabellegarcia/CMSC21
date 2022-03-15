#include <stdio.h>

int main(void){

    int i, j, k;

    i = 3; j = 4; k = 5;
    printf("\na) %d", i < j || ++j < k);
    
    i = 7; j = 8; k = 9;
    printf("\nb) %d",i - 7 && j++ < k);

    i = 7; j = 8; k = 9;
    printf("\nc.1) %d", (i = j) || (j == k));
    printf("\nc.2) %d %d %d", i, j, k);
    
    i = j = k = 1;
    printf("\nd.1) %d", ++i || ++j && ++k);
    printf("\nd.2) %d %d %d\n", i, j, k);    
    
    return 0; 
}


