#include<stdio.h>
#include<stdlib.h>

void main (){

    int a[1000],low,high,mid,key,n,i;

    printf("Enter how many array elements\n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search\n");
    scanf("%d", &key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(key==a[mid])
        {
        printf("Key element is found\n");
        exit(0);
        }
          if(key<a[mid])
          high=mid-1;

          if(key>a[mid])
          low=mid+1;

    }

    printf("Key elemnet is not found");

}