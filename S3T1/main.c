#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,i,sum=0;
    scanf("%d",&x) ;
    for (i=1;i<x;i+=2 )
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
