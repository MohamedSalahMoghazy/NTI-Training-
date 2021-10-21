#include <stdio.h>
#include <stdlib.h>
#define size 5

typedef struct
{
    int arr[size] ;
    int top ;
}stack ;

void init(stack *) ;
void push(stack * , int);
void pop(stack * ,  int *) ;
void display (stack *) ;

int main()
{
    int x=0 ;
    stack s1 ;
    init(&s1) ;
    push(&s1,45) ;
    push(&s1,50) ;
    push(&s1,50) ;
    push(&s1,12) ;
    //pop(&s1,&x) ;
    //pop(&s1,&x) ;
    //pop(&s1,&x) ;

    //printf("%d\n",x) ;
    display(&s1)  ;
    return 0;
}

void init(stack * p )
{
    p->top=-1 ;  //sets the top to be outside the stack
}

void push (stack * p , int data )
{
   if (p->top==size-1)
   {
       printf("Stack is Full\n");
   }
   else
   {
    p->top++ ;
    p->arr[p->top]=data ;

   }
}

void pop(stack * p , int * x_p)
{
    if (p->top==-1)
    {
        printf("Stack is Empty\n") ;
    }
    else
    {
        *x_p=p->arr[p->top] ;
        p->top -- ;
    }
}

void display (stack * p)
{
    if (p->top == -1 )
    {
        printf("Stack is empty") ;
    }
    else
    {
        int i ;
        for (i=p->top ; i>-1 ; i--)
        {
            printf("Element is %d\n",p->arr[i])  ;
        }
    }
}
