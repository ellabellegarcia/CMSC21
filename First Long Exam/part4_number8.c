#include <stdio.h>
int main(void)
{
    /*8b. Modify the code such that it produces the following outputs (a = 2 and b = 3)

    a. *****
    >>>>>
    <<<<<
    b. *****
    c. *****
    <<<<<
    */

    int a,b;
    
    a=2;
    b=3;


    if ( a == 2 )   
    {
        printf( "\na. *****" );
        printf( "\n>>>>>" );
        printf( "\n<<<<<" );
    }
    if ( b == 3 )
    {
        printf( "\nb. *****" );
    }
    
    printf( "\nc. *****" );
    printf( "\n<<<<<" );
    
    return 0;   
}

  