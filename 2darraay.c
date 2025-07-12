// WAP sum of given nine number row wise
// WAP sum of given any nine number column wise

#include<stdio.h>
 
int main(){

    // WAP sum of given nine number row wise
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,4}};

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf(" = %d\n",sum);
    }
    printf("\n");

    // WAP sum of given any nine number column wise
    int arr2[3][3]={{1,2,3},{1,2,3},{1,4,4}};
    int sum[3];
    for (int i = 0; i < 3; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            sum[i] = sum[i] + arr2[j][i];
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < sum[i]; i++)
    {
        printf("_ ");
    }
    printf("\n");
    for (int i = 0; i < sum[i]; i++)
    {
        printf("%d ",sum[i]);
    }

    return 0;
}