#include<stdio.h>
int main ()
{

    int income, tax_payable;
    printf("Enter income\n");
    scanf("%d", &income);

        if(income <= 250000)
        tax_payable=0;

        else 
            if(income > 250000 && income <= 500000)
            tax_payable = (income - 250000)*0.1;

        else 
            if(income > 500000 && income <= 1000000)
            tax_payable = (income - 500000)*0.2+25000;


        else 
        tax_payable = (income - 1000000)*0.3+125000;

    printf("The income = %d\n", income);
    printf("The tax payable = %d\n", tax_payable);


}