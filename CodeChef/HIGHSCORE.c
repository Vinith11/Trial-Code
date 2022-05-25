#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

        int n=4, a[100], i, lar, ques, temp;

        scanf("%d", &ques);

        for(i=0; i<n; i++)
            scanf("%d", &a[i]);

        lar=a[0];

        for(i=1; i<n; i++)
        {
            if(a[i]>lar)
            {
                temp=lar;
                lar=a[i];
            }

        }
        printf("%d\n", lar);

        
    }

return 0;
}