#include<stdio.h>
int main (){

    int t;

    scanf("%d", &t);

    while(t>0){

        int w, x, y, z, a;

        scanf("%d", &w ,&x ,&y ,&z);

        a=w+y*z;

        if(a>x){
            printf("overflow\n");
            break;
            }
            
            else if(a=x)
            {
            printf("filled\n");
            break;
            }
            
            else
            {
            printf("unfilled\n");
            break;
            
            }
        t--;
    }
    
return 0;
}