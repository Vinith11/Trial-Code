#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

       int n, u, w, x, y, z; 

       scanf("%d", &n);

        z=n*50;
        y=0.2*z;
        x=0.2*z;
        w=0.3*z;

        u=z-(x+y+w);

        printf("%d\n", u);

    }

    
    
return 0;
}