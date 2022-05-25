#include<stdio.h>
int main (){

    int t, n;

    scanf("%d", &t);

    while(t>0){

        scanf("%d", &n);

        if(n<=2)
            printf("1");
        else
            printf("2");




        t--;
    }


return 0;
}