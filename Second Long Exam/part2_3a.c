#include <stdio.h>

int fun(void){
    printf("Inside function fun\n");
}

int bored(void){
    printf("Inside function bored\n");
}


int main(){
    fun();
    bored();
    return 0;
}
