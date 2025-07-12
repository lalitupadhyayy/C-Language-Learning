#include<stdio.h>

int main(){
    int num1,num2;
    char op;
    printf("Enter your number with operation:");
    scanf("%d%c%d",&num1,&op,&num2);

    switch (op)
    {
    case '+':
        printf("sum is: %d",num1+num2);
        break;
    
    case '-':
        printf("sub is: %d",num1-num2);
        break;
    
    case '*':
        printf("Mul is: %d",num1*num2);
        break;
    
    case '/':
        printf("div is: %d",num1/num2);
        break;
    
    default:
        printf("Please, Enter only these operation +,-,*,/");
        break;
    }
}