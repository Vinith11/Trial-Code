#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

       float x, y, z;
       

       scanf("%f %f", &x, &y);

       z = x * 1.07;

       if(z>=y)
            printf("YES\n");
        else if(z<y)
            printf("NO\n");
    }

    
    
return 0;
}