#include<stdio.h>

int main(){
    int sub1,sub2,sub3,sub4;

    printf("Enter the marks of four subjects:");
    scanf("%d%d%d%d",&sub1,&sub2,&sub3,&sub4);

    printf("percentage is: %d",(sub1+sub2+sub3+sub4)/4);

}