// WAP print week days Enter your choice number 
// 1 for sun,2 for mon......
#include<stdio.h>

int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("Today is Sunday");
        break;
    
    case 2:
        printf("Today is Monday");
        break;

    case 3:
        printf("Today is Tuesday");
        break;

    case 4:
        printf("Today is Wednesday");
        break;

    case 5:
        printf("Today is Thursday");
        break;

    case 6:
        printf("Today is Friday");
        break;

    case 7:
        printf("Today is Saturday");
        break;
    default:
        printf("Please Enter input between 1 to 7");
        break;
    }
}