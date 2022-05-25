#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

       int x, y, a, b, c, d, q, n;

       scanf("%d %d %d", &n, &x, &y);

        q=n-x+x-1+n-y+y-1;
        
        /*a=min(x-1,y-1);
        b=min(x-1,n-y);
        c=min(n-x,y-1);
        d=min(n-x,n-y);*/

        if(x-1 > y- 1)
            a = y - 1;
        else
            a = x-1;

        if(x-1 > n- y)
            b = n - y;
        else
            b = x-1;
        
        if(n-x > n-1)
            c = n - 1;
        else
            c = n-x;

        if(n-x > n-y)
            d = n - y;
        else
            d = n-x;

        

        printf("%d\n", q+a+b+c+d);
    }

    
    
return 0;
}