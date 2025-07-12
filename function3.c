// function with return value and without parameters
#include<stdio.h>
int sum(){
    int a,b,s;
    a=20;
    b=10;
    s= a+b;
    return s;
}
int main(){
    int s;
    s = sum();
    printf("%d",s);
    return 0;
}