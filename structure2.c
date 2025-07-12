#include<stdio.h>
 // create a structure called mystructure
 struct mystructure{
    int myNum;
    char myLetter;
 };

int main(){
    // Create a structure variable of mySturcture called s1
    struct mystructure s1;
    struct mystructure s2;
    

    // Assign values to members os s1
    s1.myNum = 13;
    s1.myLetter = 'b';

    s2.myNum = 20;
    s2.myLetter = 'C';

    // print values
    printf("My number:%d\n", s1.myNum);
    printf("My number:%c\n", s1.myLetter);

    printf("My number:%d\n", s2.myNum);
    printf("My number:%c\n", s2.myLetter);
    return 0;
}