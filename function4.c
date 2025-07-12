// function with return value and with parameters
#include<stdio.h>
int sum(int a, int b){
    int s= a+b;
    return s;
}
int main(){
    int a,b,s;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    s = sum(a,b);
    printf("%d",s);
    return 0;
}