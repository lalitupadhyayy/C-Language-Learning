// WAP print reverse given of any number
//WAP sum of all digits given of any number
// WAP count all digits given of any number

#include<stdio.h>

int main(){
    // WAP print reverse given of any number
    /*int num,re,rev=0;
    printf("Enter any number:");
    scanf("%d",&num);
    while (num>0)
    {
    re = num%10;
    num = num/10;
        
    rev= rev*10+re; 
    }
    printf("reverse is:%d",rev);*/


    //WAP sum of all digits given of any number
    /*int num, sum=0,s;
    printf("Enter any number:");
    scanf("%d",&num);

    while (num>0)
    {
        s = num%10;
        num = num/10;
        
        sum = sum+s;
    }
    printf("sum is:%d",sum);*/
    

    // WAP count all digits given of any number
    int num,div,count=0;
    printf("Enter any number:");
    scanf("%d",&num);
    while (num>0)
    {
        num = num/10;
        count++;
    }
    printf("digits are:%d",count);
}


