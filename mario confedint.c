#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i , l;
    i = 0 ;
    do {
        printf("please enter a num between 1 and 8 \n" ) ;
        scanf("%d" , &x);
    }
    while ( 8<x || x < 1);
    for (i ; i < x ; i++) {
        for (int h = 1 ; h < (x-i) ; h++ ) {
            printf(" ");
        }

        for (l = 0 ; l <= i ; l++){
            printf("#");
        }
        printf("  ") ;
        for (l = 0 ; l <= i ; l++){
            printf("#");
        }
        printf("\n") ;
   }
    return 0;
}
