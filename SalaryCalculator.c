#include<stdio.h>

int main(){
    int basicSalary,total;
    printf("Enter your basic Salary:");
    scanf("%d",&basicSalary);
    
    total = (basicSalary/100)*4;

    printf("net Salary is:%d\n",total);
    printf("Total salary is: %d",basicSalary + total);

}