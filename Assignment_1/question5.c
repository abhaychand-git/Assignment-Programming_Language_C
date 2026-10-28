// Write a program in C to compute the expression, a² – b² and display the result on the screen.
#include<stdio.h>
int main(){
    int a, b, result;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    result = a*a - b*b;
    printf("%d",result);
    return 0;
}