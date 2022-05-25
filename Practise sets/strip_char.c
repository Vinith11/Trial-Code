#include<stdio.h>
#include<string.h>
void main()
{
    char str[30];
    int i, count;

    printf("Enter a string:");
    gets(str);

    count = 1;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        count++;
    }

    printf("Total number of words in the string is : %d\n", count); 
}
