// WAP sum of given any 10 number using array
// WAP check greatest number given between 10 numbers
// WAP sum of all even or odd number given in any 10 number
// WAP count all even & odd number given in any 10 number
// WAP find n given number existing given in 10 number
// WAP sum an given number existing given in any 10 number
// WAP count n given number existing given in any 10 number
// WAP replace given second number if n given number is found existing given in any 10 number
// WAP print asceding order given in any 10 number
// WAP print descending order given in any 10 number
// WAP search index number given 0f any value
// WAP search value given of any index number

#include<stdio.h>
 
int main(){
    // WAP sum of given any 10 number using array
    /*int arr[3][3],sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        
    }

    printf("%d",sum);*/

    // WAP check greatest number given between 10 numbers
    /*int arr[3][3];
    printf("Enter 9 numbers:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int grt = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grt<arr[i][j])
            {
                grt = arr[i][j];
            }
            
        }
        
    }
    printf("greater is: %d",grt);*/

    // WAP sum of all even or odd number given in any 10 number
    /*int arr[3][3];
    printf("Enter 9 numbers:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int even =0,odd=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]%2==0)
            {
                even = even + arr[i][j];
            }
            else odd = odd + arr[i][j];
            
        }
        
    }
    printf("even is:%d\n",even);
    printf("odd is:%d",odd);*/

    // WAP count all even & odd number given in any 10 number
    /*int arr[3][3];
    printf("Enter 9 numbers:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int even =0,odd=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]%2==0)
            {
                even++;
            }
            else odd++;
            
        }
        
    }
    printf("even is:%d\n",even);
    printf("odd is:%d",odd);*/

    // WAP find n given number existing given in 10 number
    /*int arr[3][3];
    int key;
    printf("Enter 9 numbers: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    
    printf("Enter your number to find:");
    scanf("%d",&key);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==key)
            {
                printf("element found");
                break;
            }
        }
    }*/

   // WAP sum an given number existing given in any 10 number
    int arr[3][3],key;
    int sum = 0;
    printf("Enter 9 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        scanf("%d",&arr[i]);
            
        }
        
    }
    
    printf("Enter your number to find:");
    scanf("%d",&key);   
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==key)
        {
            sum = sum + arr[i];
        }
        
    }
    printf("sum is:%d",sum);*/
    return 0;
}