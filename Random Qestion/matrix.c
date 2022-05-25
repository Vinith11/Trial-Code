#include<stdio.h>
int main (){

    int a[10][10], m, n, i, j, sum1, sum2, sum;

    printf("Enter order of the matrix:");
    scanf("%d%d", &m, &n);
    
    printf("Enter elements of the matrix:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
 
    for(i=0; i<m; i++)
    {
        sum1 = 0;
        for(j=0; j<n; j++)
            sum1 += a[i][j];
    
        printf("Sum of row %d is %d\n", i+1, sum1);
    }


    for(j=0; j<n; j++)
    {
        sum2 = 0;
        for(i=0; i<m; i++)
        {
            sum2 += a[i][j];
            sum += sum2;
        }
 
    printf("Sum of column %d is %d\n", j+1, sum2);
    
    }

    sum = 0;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            sum += a[i][j];
    }

 printf("Sum of all elements is %d\n", sum);

return 0;
}