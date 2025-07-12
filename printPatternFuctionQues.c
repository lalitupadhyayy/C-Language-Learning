// WAP print this pattern using 1st format of the function
#include<stdio.h>
 
 void pattern(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
         for (int l = 0; l < i+1; l++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
 }
int main(){
    pattern();
    return 0;
}