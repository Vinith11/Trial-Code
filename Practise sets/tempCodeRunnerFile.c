#include <stdio.h>

int main(void) {
	int t, r, l, c=0, i;
	scanf("%d\n",&t);
	while(t--)
	{
	     
	    scanf("%d %d",&l,&r);
	    for(i=l;i<=r;i++)
	     {
	       
	       if(i%10==2 || i%10==3 || i%10==9)
	          c++;
	     }
	     printf("%d\n",c);
	}
	return 0;
}

