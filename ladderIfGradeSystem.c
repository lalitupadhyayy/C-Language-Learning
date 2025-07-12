#include<stdio.h>

int main(){
    float num1,num2,num3,num4;
    printf("Enter the marks of your four subjects");
    scanf("%f%f%f%f",&num1,&num2,&num3,&num4);

    float percentage = (num1+num2+num3+num4)/4;
    printf("Your percentage is: %f \n",percentage);

    if (percentage<=100 && percentage>=90)
    {
        printf("Congratualions! You got grade A");
    }
    else if (percentage<90 && percentage>=80)
    {
        printf("Congratualions! You got grade B");
    }
    else if (percentage<80 && percentage>=70)
    {
        printf("Congratualions! You got grade C");
    }
    else if (percentage<70 && percentage>=60)
    {
        printf("Congratualions! You got grade D");
    }
    else if (percentage<60 && percentage>=50)
    {
        printf("Congratualions! You got grade E");
    }
    else if (percentage<50 && percentage>=0)
    {
        printf("You are fail");
    }
}