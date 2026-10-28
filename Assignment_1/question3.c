// 3. Write a program in C to calculate and display the sum of two numbers using integer variables.
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the value of the First Number:");
    scanf("%d",&a);
    printf("Enter the value of the Second Number:");
    scanf("%d",&b);
    sum = a + b;
    printf("Sum of the two numbers entered is %d",sum);
    return 0;
}