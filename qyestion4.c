//4. Write a program in C that accepts the temperature in Centigrade and converts into Fahrenheit [using the formula, C/5=(F-32)/9].

#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the Temprature in centigrade:\n");
    scanf("%f",&c);
    f = (9*c/5) + 32;
    printf("The Temprature in fahrenheit is %f", f);
    return 0;
    
}