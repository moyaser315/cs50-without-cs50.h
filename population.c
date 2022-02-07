#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start , end , i ;
    do{
        printf("please enter starting pop \n") ;
        scanf("%f" , &start);
    }
    while (start < 9) ;
    do {
        printf("please enter ending pop \n");
        scanf("%f" , &end) ;
    }
    while (end < start);
    i = 0 ;
    while ( start < end ){
        i++ ;
        start = start + (start/3) - (start/4) ;

    }
    printf("number of years %f \n", i) ;
    return 0;
}
