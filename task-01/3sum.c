#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter number 1 : ");
    scanf("%i", &num1);
    printf("Enter number 2 : ");
    scanf("%i", &num2); //NOTE : Its very important to put the values only in address of the variabl!
    printf("Sum of two number : %i \n",num1+num2);
}

/*Notice, that we have used &testInteger inside scanf(). 
It is because &testInteger gets the address of testInteger, 
and the value entered by the user is stored in that address.*/