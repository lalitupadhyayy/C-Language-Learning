#include<stdio.h>

int main(){
    int num1, num2, temp;

    printf("Enter the value of Num1:");
    scanf("%d",&num1);
    printf("Enter the value of Num2:");
    scanf("%d",&num2);

    temp = num1;
    num1 = num2;
    num2 =temp;

    printf(" Swapped value of Num1:%d\n",num1);
    printf(" Swapped value of Num2:%d",num2);
}