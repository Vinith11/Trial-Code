#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

        int n=4, a[100], i, solve=0;

        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]>=10)
                solve+=1;
        }

        printf("%d\n", solve);
        
    }

return 0;
}