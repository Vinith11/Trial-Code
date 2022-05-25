#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

        int n, o[1000], i, count=0;

        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
            scanf("%d", &o[i]);
        }

        for(i=0; i<n/2; i++)
        {
            if(o[i]!=o[n-i-1])
            {
                count+=1;
            }
        }

        /*if(count%2==0)
        {
            ans=count/2;
        }
        else
        {
            ans=count/2+1;
        }*/

        

        printf("%d\n", (count+1)/2);
        
    }

return 0;
}