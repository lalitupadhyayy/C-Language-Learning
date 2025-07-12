// WAP check given number palindrome or not palindrome number using 4th format of the function
#include<stdio.h>
 
 int palindrome(int num){
    int value,ans=0;
    while (num>0)
    {
        value = num%10;
        ans = ans*10 + value;
        num = num/10;
    }
    return ans;
 }
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int s = palindrome(num);
    if (s == num)
    {
        printf("Number is palindrome");
    }
    else printf("Number is not palindrome");
    return 0;
}