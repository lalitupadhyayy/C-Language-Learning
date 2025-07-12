// write a program print table of any given number using  goto statement
// WAP sum of given any five number using goto statement
// WAP print table from 1 to 10 using goto statement
// WAP print table from 1 to n given number using goto statement
#include<stdio.h>

int main(){
    /*int num = 1;
    start:
    if (num<=5)
    {
        printf("Code Buddy \n");
        num++;
        goto start;
    }*/
    
    // write a program print table of any given number using  goto statement
    /*int num = 1,n;
    printf("Enter the number for table:");
    scanf("%d",&n);
    start:
    if (num<=10)
    {
        printf("%d ",n*num);
        num++;
        goto start;
    }*/

    // WAP sum of given any five number using goto statement
    int num = 1,n,s=0;
    printf("Enter five numbers to get sum:");
    start:
    if (num<=5)
    {
    scanf("%d",&n);
        s = s+n;
        num++;
        goto start;
    }
        printf("sum is: %d",s);

    // WAP print table from 1 to 10 using goto statement
   /* int i= 1,j;
    
    start:
    if (i<=10)
    {
        j=1;
        inner:
        if (j<=10)
        {
        printf("%d\t ",i*j);
            j++;
            goto inner;
        }
        printf("\n");
        i++;
        goto start;
    }*/

   // WAP print table from 1 to n given number using goto statement
    /* int i= 1,j,n;
    printf("Enter number to get table upto there:");
    scanf("%d",&n);
    start:
    if (i<=10)
    {
        j=1;
        inner:
        if (j<=n)
        {
        printf("%d\t ",i*j);
            j++;
            goto inner;
        }
        printf("\n");
        i++;
        goto start;
    }*/
    return 0;
}