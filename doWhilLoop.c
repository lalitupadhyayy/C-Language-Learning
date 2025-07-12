#include<stdio.h>

int main(){
    /*do
    {
        Statement
    } while ( condition );*/
    
    //WAP print reverse number 50 to 1
    /*int i=50;
    do
    {
        printf("%d ",i);
        i--;
    } while (i>=1);*/

    //WAP print number 60 to 100
    /*int i=60;
    do
    {
        printf("%d ",i);
        i++;
    } while (i<=100);*/
    
    //WAP sum of all number from 1 to 20
    /*int i=1,sum=0;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=20);
    printf("%d",sum);*/

    //WAP print even number from 2 to 20
    /*int i=2;
    do
    {
        printf("%d ",i);
        i+=2;
    } while (i<=20);      */

    //WAP all odd number from 70 to 1 in reverse format
    /*int i=69;
    do
    {
        printf("%d ",i);
        i-=2;
    } while (i>=1);*/

    //WAP print table of 6
    /*int i=1;
    do
    {
        printf("%d ",i*6);
        i++;
    } while (i<=10);*/
    
    //WAP Sum of ALL even number from 20 to 100
    /*int i=20,s=0;
    do
    {
        s=s+i;
        i+=2;
    } while (i<=100);
        printf("%d ",s);*/

    //WAP sum of given any 10 number
    /*int i=1,num,s=0;
    do
    {
        scanf("%d",&num);
        s = s+num;
        i++;
    } while (i<=10);
    printf("%d ",s);*/

    //WAP print table given of any number
    /*int i=1,num;
    printf("Enter a number:");
    scanf("%d",&num);
    do
    {
        printf("%d ",i*num);
        i++;
    } while (i<=10);*/

    //WAP calculate facotrial value given of any number
    int i = 1,num,f=1;
    printf("Enter any number:");
    scanf("%d",&num);
    do
    {
        f = num*f;
        num--;
    } while (i<=num);
    printf("%d",f);   
}