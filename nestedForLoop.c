#include<stdio.h>

int main(){
    
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            int t = i*j;
            printf("\t %d ",t);
        }
        printf("\n");
    }
    

}