#include <stdio.h>
#include <stdlib.h>
struct teams{
    char club_name[20] ;
    int est;
    char rank;
    char captain[20] ;
};
int main()
{
    struct teams Egyptian_League[20]={"Ahly",1940,1,"Mohamed","Zamalek",1950,2,"Hussein"};
    //Egyptian_League[0].club_name="Ahly" will give error
    // Solution use strcopy functions >>
    //strcpy(Egyptian_League[0].club_name,"Liverpool") ;

    printf("Al-Ahly Team:\n-------------------\n");
    printf("Team Name: %s\n",Egyptian_League[0].club_name) ;
    printf("Establish Date: since %d\n",Egyptian_League[0].est) ;
    printf("Rank: %d\n",Egyptian_League[0].rank) ;
    printf("Captain: %s\n---------------------",Egyptian_League[0].captain) ;



    return 0;
}
