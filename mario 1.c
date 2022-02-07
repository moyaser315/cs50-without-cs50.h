#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i , l;
    i = 0 ;

    printf("please enter a num between 1 and 8 \n ") ;
    scanf("%d", &x);

    for (i ; i < x ; i++) {
        for (l = 0 ; l <= i ; l++){
            printf("#");
        }
        printf("\n") ;
   }
    return 0;
}
