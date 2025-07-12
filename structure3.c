#include<stdio.h>
#include<string.h>
 
 // create a structure called mystructure
 struct mystructure{
    int myNum;
    char myLetter;
    char myString[30]; // string
 };

int main(){
    struct mystructure s1;

    // Assign a value to the string using the strcpy function
    strcpy(s1.myString,"some text");

    // print the value
    printf("My string: %s",s1.myString);

    return 0;
}