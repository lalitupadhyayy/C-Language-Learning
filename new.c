// WAP count space given of any string
// WaP count vowels and consonents given of any string
// WAP print reverse given of any string
// WAP compare two string with each other if both are same then print message string is same 
    // otherwise print stirng is not same
// WAP copy one string value to another string
// WAP print shortcut characeter given of any string : ROM
// WAP count character without space
// WAP find given character existing given in any string
// WAP check given string is palindrome of not

#include<stdio.h>
#include<string.h>
 void first(){
    // WAP count space given of any string
    int space=0;
    char str[20];
    printf("Enter the value of string: ");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==' ')
        {
            space++;
        }
        
    }
    printf("No. of space are: %d",space);
 }
 void second(){
    // WaP count vowels and consonents given of any string
    int vowel= 0, cons =0;
    char str[20];
    printf("Enter any string to find vowel:\n"); 
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowel++;
        }
        else{
            cons++;
        }
        
    }
    printf("vowels are: %d\n",vowel);
    printf("cons are: %d",cons);
 }

 void third(){
    // WAP print reverse given of any string
    char str[]={"lalit"};
    int st=0, end = sizeof(str)-2;

    while (st<end)
    {
        char temp = str[st];
        str[st] = str[end];
        str[end]= temp;
        st++;
        end--;
    }
    puts(str);

 }

 void fourth(){
    // WAP compare two string with each other if both are same then print message string is same 
    // otherwise print stirng is not same

    char str[10]={"kese ho"};
    char str2[10]={"kese ho"};

    int ans = strcmp(str,str2);
    if (ans==0)
    {
        printf("strings are same");
    }
    else{
        printf("stirng are NOT same");
    }

 }

 void fifth(){
    // WAP copy one string value to another string
    char str[20]={"kese ho aap log"};
    char str2[20];

    strcpy(str2,str); // strcpy(destination, source);
    puts(str);
    puts(str2);
 }

 void sixth(){
    // WAP print shortcut characeter given of any string : ROM
    char str[20]={"Read Only Memory"};
    printf("%c",str[0]);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==' ')
        {
            i++;
            printf("%c",str[i]);
        }
        
    }
    
 }

 void seventh(){
    // WAP count character without space
    char str[20];
    printf("Enter the string: ");
    gets(str);
    int num=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]!=' ')
        {
            num++;
        }
        
    }
    printf("%d",num);
 }

 void Eighth(){
    // WAP find given character existing given in any string
    char str[20];
    char ch;
    int k=0;
    printf("Enter your string: ");
    gets(str);

    printf("Enter the character you want to search: ");
    scanf("%c",&ch);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==ch)
        {
            printf("Character found");
            k++;
            break;
        }
        
    }
    if (k==0)
    {
        printf("character not found");
    }
    


 }

 void nineth(){
    // WAP check given string is palindrome of not
    char str[]={"lalit"};
    int st=0, end = strlen(str);

    while (st<end)
    {
        if (str[st]==str[end])
        {
            st++;
            end--;
        }
        else{
            printf("string is not palindrome");
            break;
        }

    }
    if (st==end)
    {
        printf("given string is palidrome");
    }
    
 }
int main(){

    // first();
    // second();
    // third();
    // fourth();
    // fifth();
    sixth();
    // seventh();
    // Eighth();
    // nineth();
    return 0;
}