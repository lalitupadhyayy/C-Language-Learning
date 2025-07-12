// function without return value and with parameters
#include<stdio.h>
 
void sum(int a, int b){
    int s = a+b;
    printf("%d",s);
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    sum(a,b);
    return 0;
}