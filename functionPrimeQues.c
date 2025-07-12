// WAP create a function to check given number prime or not prime using 4th format of function
// WAP check given number palindrome or not palindrome number using 4th format of the function
// WAP print this pattern using 1st format of the function
// WAP print reverse given of any number using 3rd format of the function
// WAP create function to check given number perfect or not perfect number usin 2nd format of function

#include<stdio.h>
 int prime(int num){
    int k= 0;
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            k++;
        }
        
    }
    return k;
 }
int main(){
    // WAP create a function to check given number prime or not prime using 4th format of function
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int s=prime(num);
    if (s==0)
    {
        printf("number is prime");
    }
    else printf("number is not prime");
    
    return 0;
}