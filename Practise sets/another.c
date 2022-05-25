#include<stdio.h>
int main()
{
    int a[20], n, key, i, found;

    printf("How many elements? ");
    scanf("%d", &n);

    printf("Enter %d elements:", n);
    for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

    printf("Enter key to search:");
    scanf("%d", &key);
        found = 0;


    for(i=0; i<n; i++)
    {
        if(a[i] == key)
        {
        found = 1;
        break;
        }
    }
    
 if(found == 1)
 printf("Success! Element %d is found in the array", key, i);
 
 else
 printf("Failure! Element %d is not found in the array", key);
}