// WAP create function to check given number perfect or not perfect number usin 2nd format of function
#include<stdio.h>
void perfect(int num){
    int s=0;
    for (int i = 1; i <= num/2; i++)
    {
    
        if (num%i==0)
        {
            s=s+i;
        }
        
    }
            
    
    if (num==s)
    {
        printf("number is perfect");
    } else printf("number is not perefect");
}
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    perfect(num);
    return 0;
}