#include<stdio.h>

int main(){
    //WAP print reverse number 50 to 1

    /*for (int i = 50; i > 0; i--)
    {
        printf("%d\n",i);
    }*/

    //WAP print number 60 to 100
    /*for (int i = 60; i <= 100; i++)
    {
        printf("%d\n",i);
    }*/
    
    //WAP sum of all number from 1 to 20
    /*int sum=0;
    for (int i = 1; i <= 20; i++)
    {
        sum = sum + i;
    }
    printf("%d\n",sum);*/

    //WAP print even number from 2 to 20
    /*for (int i = 2; i <= 20; i++)
    {
        if (i%2==0)
        {
        printf("%d\n",i);
        }
    }*/  

    //WAP all odd number from 70 to 1 in reverse format
    /*for (int i = 70; i >= 1; i--)
    {
        if (i%2==1)
        {
        printf("%d\n",i);
        }
    } */

    //WAP print table of 6
    /*int num = 6;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",6*i);
    }*/

     //WAP Sum of ALL even number from 20 to 100 
     /*int sum =0;
     for (int i = 20; i <= 100; i++)
    {
        if (i%2==0)
        {
            sum = sum + i;
        }
    }
        printf("%d\n",sum);*/

    //WAP sum of given any 10 number
    /*int sum=0,num;
    printf("Enter the value of 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("%d",sum);*/
    

    //WAP print table given of any number
    /*int num;
    printf("Enter any number for table:");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",num*i);
    }*/

   //WAP calculate facotrial value given of any number
    int num,s=1;
    printf("Enter any number for factorial:");
    scanf("%d",&num);
   for (int i = num; i > 1; i--)
   {
    s= s*i;
   }
   printf("%d",s);
   
}