// WAP print from 1 to n given number
#include<stdio.h>

int main(){
    // pattern 1
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    // pattern 2
    printf("\n");
    printf("Pattern 2 \n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    // pattern 3
    printf("\n");
    printf("Pattern 3 \n");
    for (int i = 1; i <=6; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= 6; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    // pattern 4
    printf("\n");
    printf("Pattern 4 \n");
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    // pattern 5
    printf("\n");
    printf("Pattern 5 \n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    // pattern 6
    printf("\n");
    printf("Pattern 6 \n");
       int k = 0;
    for (int i = 5; i >= 1; i--){
        for (int j = 1; j <= 5; j++)
        {
            if (k>=j){
                printf(" ");
            }
            else{
            printf("%d",j);
            }
        }
        k++;
        printf("\n");
    }

    // pattern 7
    printf("\n");
    printf("Pattern 7 \n");
    for (int i = 1; i <=5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int l = 1; l < i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    // pattern 8
    printf("\n");
    printf("Pattern 8 \n");
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 5; k >= i; k--)
        {
            printf("*");
        }
        for (int l = 4; l >= i; l--)
        {
            printf("*");
        }
        printf("\n");
    }

    // pattern 9
    printf("\n");
    printf("Pattern 9 \n");
    for (int i = 1; i <=5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }

    // pattern 10
    printf("\n");
    printf("Pattern 10 \n");
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 5; k >= i; k--)
        {
            printf("*");
        }
        for (int l = 4; l >= i; l--)
        {
            printf("*");
        }
        printf("\n");
    } 
    for (int i = 1; i <=4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i+1; k++)
        {
            printf("*");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    } 

    // pattern 11
    printf("\n");
    printf("Pattern 11 \n"); 

    // pattern 12
    printf("\n");
    printf("Pattern 12 \n");
            int s=1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("%d",s);
            s++;
        }
        printf("\n");
    }

    // pattern 13
    int o =3;
    printf("\n");
    printf("Pattern 13 \n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d",k);
        }
        int n =4;
        for (int l = 1; l <= i; l++)
        {
            for (int m = 1; m <l ; m++)
            {
                
                printf("%d",n-o);
            }
        }
            o--;
        
        printf("\n");
        
    }
    
    
}