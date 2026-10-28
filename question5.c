//5. Write a program in C that swaps values of two variables using a third variable.

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the Value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("The initial value of a and b is %d and %d respectively\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("The new values of a and b is %d and %d respectively\n", a, b);
    return 0;
}