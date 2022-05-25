#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

        int a[1000], i, n, x=0;

        scanf("%d", &n);

        for(i=0; i<n; i++)
            scanf("%d", &a[i]);


        for(i=0; i<n; i++){
            if(a[i]>999)
            {
                x++;
            }
        }
       
        printf("%d", x);

    }

    
    
return 0;
}