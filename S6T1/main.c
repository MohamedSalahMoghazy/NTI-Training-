#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*) ;

int main()
{
    int x=10 ;
    int y=20 ;
    swap(&x,&y) ;
    printf("%d  %d",x,y)  ;
    return 0;
}

void swap (int* p1 , int* p2)
{
   // int x=* p1 ; //x=10
   // *p1=*p2  ;
   //*p2=x ;

   /*
    // Code after optimization
    *p1+=*p1 + *p2  ;
    *p2=*p1-*p2 ;
    *p1=*p1 - *p2 ;
   */
    // Code after Further Optimization
    *p1 += *p2 ;
    *p2 = *p1-*p2 ;
    *p1 -= *p2 ;
    // Same Code could be written using multiplication and division
}
