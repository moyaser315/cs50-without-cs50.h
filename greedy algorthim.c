#include <stdio.h>
#include<math.h>

int main()
{
    float quarters , dimes , pennies , nickels , money , i ;
    quarters=0.25 ;
    dimes = 0.1 ;
    nickels = 0.05;
    pennies = 0.01 ;
    i = 0 ;
    do {
        printf("cash owed") ;
        scanf("%f"  , &money);
    }
    while (money<0);
    money = fmod(money , 1) ;
    round(money * 0.01) ;
    while ( money >= quarters){
        i++ ;
        money = money - quarters ;
    }
    while ( money >= dimes){
        i++ ;
        money = money - dimes ;
    }
    while ( money >= nickels){
        i++ ;
        money = money - nickels ;
    }
     do{
        i++ ;
        money -= 0.01 ;
     }
     while(money >= 0.01) ;
    printf("%.0f coins" , i) ;
    return 0;
}
