#include<stdio.h>
 
int main(){
    /*int arr[9]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3],k=0;
    // 1d array
    printf("1d Array:");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("2d Array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j]=arr[k];
            printf("%d ",arr2[i][j]);
            k++;
        }
        printf("\n");*/

        int A[3][3],B[3][3],c[3][3];
        A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        B[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d",A[i][j]);
            }
            
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d",B[i][j]);
            }
            
        }
        
    }
    
    
    
    return 0;
}