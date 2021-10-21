#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num1,num2,symbol ;
    int result=0  ;

    printf("Enter the operation Symbol ") ;
    scanf("%c",symbol) ;
/*
    printf("Enter 1st No. ");
    scanf("%d",&num1) ;

    printf("Enter 2nd No. ") ;
    scanf("%d",&num2) ;

    switch(symbol)
    {
    case('+'):
        result=num1+num2 ;
        break ;
    case('-'):
        result=num1-num2 ;
        break ;
    case('*'):
        result=num1 * num2 ;
        break ;
    case('/'):
        result=num1/num2 ;
        break ;
    default :
        printf("Please enter a valid symbol") ;
        break ;
    }


*/


    printf("/nSymbol is %c",symbol) ;
    return 0;
}
