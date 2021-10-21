#include <stdio.h>
#include <stdlib.h>
void se(int*,int,int);

int main()
{
    int arr[8]={12,33,44,44,4,4,4,99} ;
    se(&arr,8,99) ;
    return 0;
}

void se(int*p ,int size ,int target)
{
    int i=0 ;
    for (i=0;i<size;i++)
    {
        if(p[i]==target)
        {
            printf("Number you are looking is %d and its location is %d",target,i) ;
            return ;
        }
    }
            printf("Number Not Found") ;

}
