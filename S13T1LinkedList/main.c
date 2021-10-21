#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data;
    struct node * next ;
} node ;

typedef struct
{
    node * top ;
} head ;

void init(head *)  ;
void push(head * , int ) ;
void pop(head * , int * ) ;

int main()
{
    int x=0 ;
    head h1 ;
    init(&h1) ;
    push(&h1,1);
    push(&h1,2);
    push(&h1,3);
    pop(&h1,&x);

    printf("X is : %d",x)  ;

    return 0;
}

void init (head * p )
{
    p->top= NULL ;
}

void push(head * p , int data_in)
{
    node * p1= (node *) malloc (sizeof(node)) ;  // create p1 holds new node
    p1->data=data_in ;  //saves new data in the node
    p1->next= p->top ;  //next points whatever in top
    p->top=p1 ;  //top is pointing to node

}

void pop (head * p , int * x)
{
    *x=p->top->data ;
    node * temp ;
    temp = p->top ;
    p->top = p->top->next ;
    free(temp) ;
}

