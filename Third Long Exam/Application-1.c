#include <stdio.h> 

struct employee { 
    char ename[10];
    int sal;
};

int main(){
    struct employee emp[5];
    int i,j, n;
    printf("Enter number of employees:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nEnter %dst employee record\n",i+1);
        printf("\nEmployee name\t");
        scanf("%s", emp[i].ename);
        printf("\nEnter employee salary\t");
        scanf("%d", &emp[i].sal);
    }
    printf("\nDisplaying Employee record\n");
    for(i=0;i<n;i++){
        printf("\nEmployee name is %s",emp[i].ename);
        printf("\nSalary is %d",emp[i].sal);
    }
}
