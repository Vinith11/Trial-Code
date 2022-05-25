#include<stdio.h>
int main (){
    
    int a[10][10], m, n, i, j ,b[10][10];

    printf("Enter order of the matrix:");
    scanf("%d%d", &m, &n);
    
    printf("Enter elements of the matrix:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            b[j][i] = a[i][j];
        }       
    }

    printf("Transposed matrix is\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }

    return 0;
}