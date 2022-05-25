#include<stdio.h>
int main (){

    int t, n;

    scanf("%d",&t);

    while(t>0){
        scanf("%d", &n);

        n=(n-1)*3-(((n-1)/2)*3);

        printf("%d\n", n);
        
        t--;
    }

return 0;
}