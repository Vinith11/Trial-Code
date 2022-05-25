#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

        int n, p[1000], i, lar;

        scanf("%d", &n);

        for(i=0; i<n; i++)
            scanf("%d", &p[i]);

        

        for(i=0; i<n; i++)
        {
            if(p[i]!=0)
            {
                lar=i;
            }

        }
        printf("%d\n", lar);

        
    }

return 0;
}