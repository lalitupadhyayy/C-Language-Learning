// WAP check number is even or odd
// WAP check given number is positive or negative number
// WAP check greatest number given between two number
// WAP print table of even number not odd number given of any nubmer
// WAP print table of odd number not even number given of any number
// WAP check given number is prime or not prime
// WAP check given number is perfect or not perfect
// WAP print all prime number between 1 to 10
// WAP print all perfect number from 1 to 1000
// WAP check given number is palindrome or not palindrome
// WAP check given number is armstrong or not
//WAP print all palindrom number between 1 to 500
// WAP print all armstrong number between 1 to 500

#include<stdio.h>

int main(){
    // WAP check number is even or odd
    /*int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("%d is even",num);
    }
    else printf("%d is odd",num);*/
    
    // WAP check given number is positive or negative number
    /*int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num<0)
    {
        printf("%d is negative",num);
    }
    else printf("%d is positive",num);*/

    // WAP check greatest number given between two number
    /*int num1,num2;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);

    if (num1>num2)
    {
        printf("%d is greater",num1);
    }
    else printf("%d is greater",num2);*/

    // WAP print table of even number not odd number given of any nubmer
    /*int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num%2==0)
    {
        for (int i = 1; i <=10; i++)
        {
            printf("%d ",num*i);
            
        }
        
    }
    else printf("%d is odd",num);*/

    // WAP print table of odd number not even number given of any number
    /*int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num%2==1)
    {
        for (int i = 1; i <=10; i++)
        {
            printf("%d ",num*i);
            
        }
        
    }
    else printf("%d is even",num);*/

    // WAP check given number is prime or not prime
    int num,k=0;
    printf("Enter a number:");
    scanf("%d",&num);   

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            printf("number is not prime");
            k++;
            break;
        }
        
    }
    if (k==0)
    {
        printf("number is prime");
    }
    
    // WAP check given number is perfect or not perfect
    /*int num,s=0;
    printf("Enter a number:");
    scanf("%d",&num);

    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            s=s+i;
        }
        
    }
    if (num==s)
    {
        printf("number is perfect");
    }*/


    // WAP print all prime number between 1 to 10
    
    /*for (int j = 2; j < 10; j++)
    {
        int k=0;
        
         for (int i = 2; i < j; i++)
        {
            if (j%i==0)
            {
            
                k++;
            }
        
        }
        if (k==0)
        {
            printf("%d",j);
        }
    }*/

    // WAP print all perfect number from 1 to 1000
    // int s=0,i;
    // for ( i = 1; i <1000; i++)
    // {
    //     for (int j = 0; j < ; j++)
    //     {
    //     if (j%i==0)
    //     {
    //         s=s+i;
    //     }
            
    //     }
        
        
    // }
    // if (i==s)
    // {
    //     printf("number is perfect");
    // }

    // WAP check given number is palindrome or not palindrome
    /*int num,s,value=0,k;
    printf("Enter a number:");
    scanf("%d",&num);
    k=num;
    while (num>0)
    {
        s = num%10;
        num = num/10;
        value = (value*10)+s;
    }
    if (k==value)
    {
        printf("number is palindrome");
    }
    else printf("number is not palindrome");*/
    
    // WAP check given number is armstrong or not
    /*int num,s,value=0,k;
    printf("Enter a number:");
    scanf("%d",&num);
    k=num;
    while (num>0)
    {
        s = num%10;
        num = num/10;
        value = value+(s*s*s);
    }
    if (k==value)
    {
        printf("number is armstrong");
    }
    else printf("number is not armstrong");*/
    
    //WAP print all palindrom number between 1 to 500
    /*int s,value;
    for (int i = 1; i <= 500; i++){
            int num=i;
        value =0;
        while (num>0)
        {
            s = num%10;
            num = num/10;
            value = (value*10)+s;
            // printf("hi");
        } 
        if (i==value)
        {
            printf("%d ",i);
        } 
    }*/

    // WAP print all armstrong number between 1 to 500
    /*int num,s,value=0,k;
    for (int i = 100; i < 500; i++)
    {
        num = i;
    value =0;
    while (num>0)
    {
        s = num%10;
        num = num/10;
        value = value+(s*s*s);
    }
    if (i==value)
    {
        printf("%d ",i);
    }
    }*/
    
    return 0;
}