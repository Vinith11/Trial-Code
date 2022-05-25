#include<stdio.h>
int main (){

    int t, x, y, z;

    scanf("%d", &t);

    while(t>0){

        scanf("%d %d %d", &x, &y, &z);

        if(x+y<=z)
            printf("2\n");
        else if(x<=z)
            printf("1\n");

        else 
             printf("0\n");
        
        t--;
    }




return 0;
}