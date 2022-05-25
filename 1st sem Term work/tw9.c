#include<stdio.h>
int isprime(int n);
void main ()

{

    int n,result;

    printf("Enter no. to check if it is prime or not\n");
    scanf("%d", &n);

    result=isprime(n);

    if(result==1)
        printf("The number is prime\n");
    else
        printf("The number is not a prime\n");
}

int isprime(int n)
{
    int i;
    for(i=2; i<=n-1; i++)
    {
    if(n%i == 0)
    return 0;
    }
    return 1;
}