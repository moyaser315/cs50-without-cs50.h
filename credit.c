#include <stdio.h>
#include <math.h>
int main ()
{
    long long cardnumber ,credit , count ,app1 ,app2 ;
    int i , sum1 ,sum2 , x , y , z , r , valid;
    //x is the second percentile
    //y is the first percentile
    i = 0 ;
    sum1 = 0 ;
    sum2 = 0 ;
    do{
        printf("enter credit num\n");
        scanf("%lld", &cardnumber);
    }
    while (cardnumber<0) ;
    z=cardnumber/pow(10 , 13);
    r = cardnumber/pow(10 , 14) ;
    credit = cardnumber ;
    app1 = cardnumber;
    app2 = cardnumber ;
    while(credit > 0){
        i++;
        credit = credit / 10 ;
    }
    if (i==13 || i == 16 || i == 15){
            while(app1>0){
                y = app1 % 10 ;
                sum1 = sum1 + y ;
                app1 = app1 / 100 ;
            }
            while (app2 > 0) {
                app2 =app2 /10 ;
                x = app2 %10 ;
                x = x*2 ;
                app2 =app2 /10 ;
                if (x>9){
                    sum2 = sum2 + x/10 + x % 10 ;
                }
                else{
                    sum2 = sum2 + x ;
                }
            }
            valid = sum1 + sum2 ;
            if (valid % 10 == 0){
                if ( i == 15 && (z == 37 || z == 34) ) {
                    printf("card is valid \n") ;
                    printf("this card is American Express \n");
                }
                else if ( i == 16 && (r == 51 || r ==52 || r ==53 || r ==54 || r == 55) ){
                    printf("card is valid \n") ;
                    printf("this card is mastercard");
                }
                else {
                    printf("card is valid \n") ;
                    printf("this card is visa");
                }
            }
            else {
                printf("card is invalid \n") ;
            }



    }
    else {
        printf("card is invalid");
    }

    return 0;
}
// r and z are just to make it more readable, you could have just put the condition
    /* i'm sure this isn't the most optimized code, but this is what i could think of,
     so if you have any suggestion ,or better solution i will be happy if you contact me! */
