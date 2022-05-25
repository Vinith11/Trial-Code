#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t--)
    {

        int a[100], i, n, j, temp, c=0;

        scanf("%d", &n);

        for(i=0; i<n; i++)
            scanf("%d", &a[i]);

        for(j=0; j<n; j++)
        {
            for(i=0; i<n-j-1; i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }  

        

        for(i=0; i<n; i++)
        {
            if(a[i] == a[i-1])
            {
                c++;
                if(c>=2)
                {
                    printf("CONFUSED");
                    break;
                }
                
            }
           
                                
        }

            

    }

    
    
return 0;
}