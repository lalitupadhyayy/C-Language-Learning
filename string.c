
#include<stdio.h>
#include<string.h>
#include<ctype.h> 

int main(){
    //char str[]="rohan";
    //char str[6];
    // for (int i = 0; i < 6; i++)
    // {
    //     scanf("%c",&str[i]);
    // }
    //printf("%c",toupper(str[0]));
    // printf("%s",toupper(str));
    //scanf("%s",&str);
    //printf("%s",str);
    // printf("enter str:");
    // gets(str);
    // puts(toupper(str));

    /*char str[10];
    gets(str);
    int length = strlen(str);
    printf("%d",length);
    return 0;*/

    // WAP calculate length given of any string
    char ch[]="lalit";
    // int count = strlen(ch);
    // printf("%d",count);
    int num =0;
    for (int i = 0; ch[i]!= '\0'; i++)
    {
        num++; 
    }
    printf("%d",num);
    // WAP count character of string without space
    

}

