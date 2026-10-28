//2. Modify program no. 1 to display a multiline message on the screen using /n character.
#include<stdio.h>
int main(){
    char r[100];
    printf("Enter Your Message:");
    scanf("%s",&r);
    printf("%s\n%s\n%s\n%s\n%s",r,r,r,r,r);
    return 0;
}