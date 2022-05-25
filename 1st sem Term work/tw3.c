#include<stdio.h>
void main()
{

    int num,dig,count=0,sum=0;

    printf("Enter the number\n");
    scanf("%d", &num);

    while(num!=0)
    {
        dig=num%10;
        sum=sum*10+dig;
        num=num/10;
        count++;
    }

    printf("Reversed number = %d\n", sum);
    printf("Number of digits are = %d", count);

}