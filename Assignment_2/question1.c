// 1. Write a program in C that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student.
#include<stdio.h>
int main(){
    int a,b,c,d,e,sum,average;
    //Enter the marks of all five subjects one by one, pressing enter after the marks of each subject.
    printf("Enter the marks:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum = a + b + c + d + e;
    printf("The sum of the marks is %d\n",sum);
    average = sum/5;
    printf("The average of the marks is %d\n",sum);
    return 0;
}