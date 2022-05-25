#include<stdio.h>
int main (){

    int t, w, x, y, z;

    scanf("%d", &t);

    while(t--)
    {

      

        scanf("%d %d %d %d", &w ,&x ,&y ,&z);

        

        if(x==w+(y*z)){
            printf("Filled\n");
            
        }
        else if(x>w+(y*z)){
            printf("unfilled\n");
            
        }
        else{
            printf("overflow\n");
            
        }

    } 
    
    return 0;
}