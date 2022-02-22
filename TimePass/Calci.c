#include<stdio.h>
int main (){
    int a , b ,choice;

    do

    {

        printf("Enter two numbers\n");
        scanf("%d  %d",&a , &b);

        printf("Enter your choice\n");
        printf("1 Addition\n");
        printf("2 Substraction\n");
        printf("3 Multiplication\n");
        printf("4 Divison\n");
        printf("5 Exit\n");

        scanf("%d", &choice);

        switch(choice)

            {
                            case '1':
                                    printf("Addition is %d\n", a+b);
                                    break;


                            case '2':
                                    printf("Substraction is %d\n", a-b);
                                    break;


                            case '3':
                                    printf("Multiplication is %d\n", a*b);
                                    break;

                            case '4':
                                    printf("Division is %d\n", a/b);
                                    break;

            


            }




}

return 0;
}