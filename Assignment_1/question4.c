// 4. Modify program no. 3 to accept two integer numbers, X and Y from the user and then compute their sum, S = X + Y. Display the message “Sum of X and Y is S” as output on the screen.

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