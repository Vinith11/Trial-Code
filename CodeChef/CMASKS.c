#include<stdio.h>
int main (){

    int t, x, y;

    scanf("%d", &t);

    while(t>0){
        scanf("%d %d", &x, &y);

        x *= 100;
        y *= 10;

        if(x>=y)
            printf("Cloth\n");
        else
            printf("Disposable\n");

    t--;

    }


return 0;
}