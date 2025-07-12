// WAP write a program check greatest number given between three number using nested if else

#include<stdio.h>

int main(){

    /*if ( condition )
    {
        statement
        if ( condition )
        {
            statement
        }
        
    }
    else{
        statement
    }*/

   int num1,num2,num3;
   printf("Enter three numbers:");
   scanf("%d%d%d",&num1,&num2,&num3);

   if (num1>num2)
   {
        if (num1>num3)
        {
            printf("%d is greater",num1);
        }
        else if (num3>num2)
        {
            printf("%d is greater",num3);
        }
   }
   else if(num2>num1){
        if (num2>num3)
        {
            printf("%d is greater",num2);
        }
        else if (num3>num2)
        {
            printf("%d is greater",num3);
        }
   }
   
    
    return 0;
}