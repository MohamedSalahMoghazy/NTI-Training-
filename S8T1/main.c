#include <stdio.h>
#include <stdlib.h>
#define size 10

void dataFunc (char * ) ; //Function Prototypes
void dispFunc (char *) ;

int main()
{
    char arr [size] ;    //10 byte array of characters
    dataFunc (&arr) ;   // Data Function takes the pointer to arr
    printf("Your Array is: ");
    dispFunc (&arr)  ;  // Printing the elements of Array

    return 0;
}

void dataFunc (char *p)
{
    char i=0 ;
    printf("Enter the Array Elements Please...\n") ;
    for (i=0;i<size;i++,p++ )
    scanf(" %d",p)  ;
}

void dispFunc (char *p)   //4 bytes for pointer
{
    char i=0 ;          // 1 byte for the counter
    for (i=0;i<size;i++ )
    printf("%d ",p[i])  ;
}
