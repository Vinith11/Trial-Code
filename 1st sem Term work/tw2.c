#include<stdio.h>
void main()
{
    
    int a, b, nr, dr, rem, gcd, lcm;

    printf("Enter two numbers to check GCD and LCM\n");
    scanf("%d %d", &a , &b);

    if(a>b)
    {
        nr = a;
        dr = b;
    }
     else
     {
         nr=b;
         dr=a;
     }

    rem=nr%dr;

    while(rem != 0){

        nr = dr;
        dr = rem;
        rem=nr%dr;
    }

    gcd = dr;
    lcm=(a*b)/gcd;

    printf("The GCD is %d\n", gcd);
    printf("The LCM is %d\n", lcm);

}