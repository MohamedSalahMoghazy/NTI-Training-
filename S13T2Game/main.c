#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int spy;
    struct car * g1 ;
    struct car * g2 ;
    struct car * g3 ;
    struct car * g4 ;
} car ;

typedef struct
{
    car * top ;
} driverCar  ;



int main()

{
    car car1,car2,car3,car4,car5 ;
    driver driverCar ;


    car2.g4=&car1.spy ;
    car3.g3=car2.g4  ;
    car4.g1=car3.g3 ;
    car5.g2=car4.g1 ;
    driverCar.top=car5.g2 ;



    printf("X is : %d",x)  ;

    return 0;
}
