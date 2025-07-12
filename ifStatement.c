// WAP sum of those number which numberis divided by 2 and 5 given in any 10 number
// WAP sum of those number which number is divided by 3 and 5 given in any 10 number
// WAP print number from 1 to 10 except 4
// WAP sum of those number which number is divided by only 5 given in any 10 number
#include<stdio.h>

int main(){
    // if statement
    /*if (expression)
    {
        statement
    }*/
    
    // WAP sum of those number which numberis divided by 2 and 5 given in any 10 number
    int s=0,num;
    printf("Enter 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num);
        if (num%2==0 && num%5==0)
        {
            s = s + num;
        }
        
    }
    printf("%d",s);

    // WAP sum of those number which number is divided by 3 and 5 given in any 10 number
    /*int s=0,num;
    printf("Enter 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num);
        if (num%3==0)
        {
            if (num%5==0)
            {
                s = s + num;
            }
        }
        
    }
    printf("%d",s);*/

    // WAP print number from 1 to 10 except 4
    /*for (int i = 1; i <= 10; i++)
    {
        if (i!=4)
        {
            printf("%d ",i);
        }
        
    }*/

    // WAP sum of those number which number is divided by only 5 given in any 10 number
    /*int s=0,num;
    printf("Enter 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num);
            if (num%5==0)
            {
                s = s + num;
            }
        
    }
    printf("%d",s);    */
}

