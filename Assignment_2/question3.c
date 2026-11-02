// 3. Write a program in C to calculate the area and circumference of a circle.


#include<stdio.h>
int main(){
    int r;
    float pi, a, c;
    printf("Enter the Radius of the Circle:\n");
    scanf("%d",&r);
    pi = 3.14;
    a = pi*r*r;
    c = 2*pi*r;
    printf("The area and circumference of the circle is %f and %f respectively.",a,c);
    return 0;

}