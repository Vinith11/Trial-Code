#include<stdio.h>
int main (){

    int t, a[100], n, j, i;

    scanf("%d", &t);

    while(t>0){

        scanf("%d", &n);
    
        for(i=0;i<n;i++)
            scanf("%d",a[i]);

        for(i=0; i<n; i++){
                if(a[i]- a[i-1]==2*(a[i+1]-a[i]))
                    printf("yes\n");
                else
                    printf("no\n");
            }

        t--;
    }

return 0;
}