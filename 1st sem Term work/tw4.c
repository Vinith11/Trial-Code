#include<stdio.h>
#include<stdlib.h>

void main (){

    int bal=10000,choice,amt;
    while(1)
    {
        printf("Enter the option\n 1:Deposit\n 2:Withdraw\n 3:Check balance\n 4:Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: printf("Enter the amount to deposit\n");
                    scanf("%d", &amt);
                    bal =bal + amt;
                    printf("Your Balance is %d\n", bal);
                    break;

            case 2: printf("Enter the amount to withdraw\n");
                    scanf("%d", &amt);
                    if(amt<=bal){
                    bal -= amt;
                    printf("Your Balance is %d\n", bal);
                    }
                    else{
                    printf("Insufficient Balance");
                    }
                    break;

            case 3: printf("Your Balance is %d\n", bal);
                    break;

            case 4: exit(0);
            default: printf("Invaild choice\n");
            
        }
    }

}

