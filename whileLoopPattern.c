#include<stdio.h>

int main(){
    //table from 1 to 10
    int i=1;
    while (i<=10)
    {
        int j=1;
        // printf("%d",i);
        while (j<=10)
        {
            printf("%d\t ",i*j);
            j++;
        }
        i++;
        printf("\n");
    }

     // table from 1 to n
     /*int range;
     printf("Enter a range:");
     scanf("%d",&range);
     int i=1;
    while (i<=10)
    {
        int j=1;
        // printf("%d",i);
        while (j<=range)
        {
            printf("%d\t ",i*j);
            j++;
        }
        i++;
        printf("\n");
    }  */

   // patern 1
   /*printf("Pattern 1:\n");
   int i=1;
   while (i<=5)
   {
        int j=1;
        while (j<=i)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
   }*/
   
   //Patern 2:
   /*printf("Pattern 2:\n");
   int i=5;
   while (i>=1)
   {
        int j=1;
        while (j<=i)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i--;
   }*/

   // Pattern 3:
   /*printf("Pattern 3:\n");
   int i=5;
   while (i>=1)
   {
        int j=1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
   }*/

   //Pattern 4:
   /*printf("Pattern 4:\n");
   int i=1;
   while (i<=5)
   {
        int j=1;
        while (j<i)
        {
            printf(" ");
            j++;
        }
        int k=i;
        while (k<=5)
        {
            printf("*");
            k++;
        }
        
        printf("\n");
        i++;
   }*/

    //Pattern 5:
    /*printf("Pattern 5:\n");

    int i=1;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }*/
    
    //Pattern 6:
    /*printf("Pattern 6:\n");

    int i=1;
    while (i<=5)
    {
        int j=1;
        while (j<=i)
        {
            printf("%d",i);
            j++;
        }
        printf("\n");
        i++;
    }*/
}