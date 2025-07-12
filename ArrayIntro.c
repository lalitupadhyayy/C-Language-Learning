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
    /*int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum is:%d",sum);*/

    // WAP check greatest number given between 10 numbers
    /*int arr[10] = {1,2,3,4,50,6,7,80,9,0};
    int grt = arr[0];
    for ( int i = 0; i < 10; i++)
    {
            if (grt<arr[i])
        {
            grt = arr[i];
        }
        
    }
    printf("%d",grt);*/

    // WAP sum of all even or odd number given in any 10 number
    /*int arr[10] = {1,2,3,4,5,6,7,8,9,11};
    int even=0,odd=0;
    for (int i = 0; i < 10; i++)
    {

        if (arr[i]%2==0)
        {
            even = even + arr[i];
        }
        else{
            odd = odd + arr[i];
        }
        
    }
    printf("even sum:%d\n",even);
    printf("odd sum: %d",odd);*/
    
    // WAP count all even & odd number given in any 10 number
    /*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int even=0,odd=0;
    for (int i = 0; i < 10; i++)
    {

        if (arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("even sum:%d\n",even);
    printf("odd sum: %d",odd);*/

    // WAP find n given number existing given in 10 number
    /*int arr[10];
    int key;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter your number to find:");
    scanf("%d",&key);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==key)
        {
            printf("element found");
            break;
        }
        
    }*/
    
    // WAP sum an given number existing given in any 10 number
    /*int arr[10],key;
    int sum = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
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
    
    // WAP count n given number existing given in any 10 number
    /*int arr[10],key;
    int sum = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter your number to find:");
    scanf("%d",&key);   
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==key)
        {
            sum++;
        }
        
    }
    printf("sum is:%d",sum);*/

    // WAP replace given second number if n given number is found existing given in any 10 number
    /*int arr[10];
    int key,re;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter your number to find:");
    scanf("%d",&key);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==key)
        {
            printf("element found\n");
            printf("Enter your number to replace:");
            scanf("%d",&re);

            arr[i] = re;
            break;
        }
        
    }
    printf("Elements are:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
        
    }*/
    
    // WAP print asceding order given in any 10 number
    /*int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("ascending order is:");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("ascending array is:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }*/
    
    // WAP print descending order given in any 10 number
    /*int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("ascending array is:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }*/


    // WAP search index number given 0f any value
    /*int arr[10];
    int key;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter your number to find:");
    scanf("%d",&key);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==key)
        {
            printf("index is: %d",i);
            break;
        }
        
    }*/

    // WAP search value given of any index number
    /*int arr[10];
    int key;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter your index to find:");
    scanf("%d",&key);

    for (int i = 0; i < 10; i++)
    {
        if (i==key)
        {
            printf("number is: %d",arr[i]);
            break;
        }
        
    }*/
    return 0;
}