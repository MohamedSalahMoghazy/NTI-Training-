#include <stdio.h>
#include <stdlib.h>
struct team{
    int est;
    char rank;
    char captain[10] ;
};
int main()
{
    struct team myTeam={1950,1,"Mohamed"};
    printf("Establish Date %d\n",myTeam.est) ;
    printf("Rank %d\n",myTeam.rank) ;
    printf("Captain %s\n",myTeam.captain) ;

    //To change the captain we couldn't change it
    //directly we use strcopy

    return 0;
}
