//WAp calculate operation enter your choicde number
    /*1 sum 
    2 sub 
    3 mul
    4 div
    given of any number*/

//WAP calculte result given four subject marks of the student with grade mechanism

#include<stdio.h>

int main(){

    // syntax
    /*if (expression)
    {
        // statement
    }
    else if (expression)
    {
        // statement
    }
    else if (expression)
    {
        // statement
    }
    else{
        // statement
    }*/

   // Calculator function
   int num1,num2,op;
   printf("Enter two numbers:");
   scanf("%d%d",&num1,&num2);
   printf("Enter your operation:\n");
   printf("1 for addition\n");
   printf("2 for subtraction\n");
   printf("3 for multiplication\n");
   printf("4 for division\n");

    scanf("%d",&op);

    if (op==1)
    {
        printf("sum is:%d",num1+num2);
    }
    else if (op==2)
    {
        printf("sub is:%d",num1-num2);
    }
    else if (op==3)
    {
        printf("Mul is:%d",num1*num2);
    }
    else if (op==4)
    {
        printf("div is:%d",num1/num2);
    }
    
    
    return 0;
}