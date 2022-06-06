#include<stdio.h>
struct fraction{
int num;
int deno;
};

//body of function sum
struct fraction sum(struct fraction f1, struct fraction f2) {
    int numerator, denominator;
    numerator = (f1.num * f2.deno) + (f2.num * f1.deno);
    denominator = f1.deno * f2.deno;
    struct fraction result= {numerator, denominator};
    return result;
}

int main(){
    int num1,deno1,num2,deno2;
    printf("Fraction 1 numerator & denominator:");
    scanf("%d%d",&num1,&deno1);
    printf("Fraction 2 numerator & denominator:");
    scanf("%d%d",&num2, &deno2);
    
    //initialize the values of the structure
    struct fraction f1= {num1 , deno1};
    struct fraction f2 = {num2 , deno2};
    struct fraction result = sum(f1, f2);
    printf("Result=%d/%d",result.num,result.deno);
    return 0;
}
