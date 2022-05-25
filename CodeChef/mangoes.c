#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--){

        int x, y, z, a;

        scanf("%d %d %d", &x, &y, &z);

        a = (z - y)/x;
            printf("%d\n", a);
        
    }
    
return 0;
}