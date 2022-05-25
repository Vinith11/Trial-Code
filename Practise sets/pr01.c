#include <stdio.h>

int main(void) {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	   int c=0, rem=0,  r, l;
	    scanf("%d %d",&l,&r);
	    for(int i=l;i<=r;i++)
	     {
	       rem=i%10;
	       if(rem==2 || rem==3 || rem==9)
	        {
              c++;
           }
        }
	     printf("%d\n",c);
	}
	return 0;
}

