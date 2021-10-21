#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2 ;
    char symbol  ;
    int result=0  ;


 /*
 // Symbol is at First ==== works fine
    printf("Enter the operation Symbol ") ;
    scanf("%c",&symbol) ;
    printf("Enter 1st No. ");
    scanf("%d",&num1) ;
    printf("Enter 2nd No. ") ;
    scanf("%d",&num2) ;
//*/

/*
// Symbol is at middle ==== Not Working
    printf("Enter 1st No. ");
    scanf("%d",&num1) ;

    printf("Enter the operation Symbol ") ;
    scanf(" %c",&symbol) ;

    printf("Enter 2nd No. ") ;
    scanf("%d",&num2) ;

    // Works By putting Space before %c to eat the
    // newline character
*/

/*
    // Symbol is at last==== Not Working
    printf("Enter 1st No. ");
    scanf("%d",&num1) ;
    printf("Enter 2nd No. ") ;
    scanf("%d",&num2) ;
    printf("Enter the operation Symbol ") ;
    scanf(" %c",&symbol) ;

    // Works By putting Space before %c to eat the
    // newline character
*/


    printf("Enter 1st No. ");
    scanf("%d",&num1) ;
    printf("Enter 2nd No. ") ;
    scanf("%d",&num2) ;
    printf("Enter the operation Symbol ") ;
    scanf("%[^\n]%c",&symbol) ;

    //symbol=getchar() ;
    //printf("You entered : ");
    //putchar(symbol)  ;

    switch(symbol)
    {
    case '+':
        result=num1+num2 ;
        break ;
    case'-':
        result=num1-num2 ;
        break ;
    case'*':
        result=num1 * num2 ;
        break ;
    case'/':
        result=num1/num2 ;
        break ;
    default :
        printf("Please enter a valid symbol\n") ;
        break ;
    }

    printf("\nResult is %d",result) ;
    return 0;
}
