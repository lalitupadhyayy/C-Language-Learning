// WAP print reverse given of any number using 3rd format of the function
#include<stdio.h>
 int reverse(){
    int num;
    int value,ans=0;
    printf("Enter the value of num");
    scanf("%d",&num);
    while (num>0)
    {
        value = num%10;
        ans = ans*10 + value;
        num = num/10;
    }
    return ans;
 }
int main(){
    printf("%d",reverse());
    return 0;
}