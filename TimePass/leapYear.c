#include<stdio.h>
int main (){

    int year;

    printf("Enter Year\n");
    scanf("%d", &year);

    /*if (year is not divisible by 4) then (it is a common year)
    else if (year is not divisible by 100) then (it is a leap year)
    else if (year is not divisible by 400) then (it is a common year)
    else (it is a leap year)*/

    if(year%4 != 0 ){
                printf("It is a common year\n");
    }

    else if (year%100 != 0){
                printf("It is a leap year\n");
    }

    else if (year%400 != 0){
                printf("It is a common year\n");
    }

    else {
                printf("It is a leap year\n");
    }

return 0;
}