// 2. Write a program in C that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate of Interest and Time are entered through the keyboard.
/* we know that,    
    Formula of Simple Intrest = (p*t*r)/100
    Formula of Compound Intrest = p(1+ r/n)**(nt)
        where, p is principal
        t is time (in years)
        r is rate of intrest  (in %)
        n is number of times intrest is compounded annualy 
*/

#include<stdio.h>
int main(){
    int p,r,t;
    float n,SI,CI;

    //Principal
    printf("Enter the Principal:\n");
    scanf("%d",&p);

    //Rate of Intrest
    printf("Enter the Rate of Intrest: \n");
    scanf("%d",&r);

    //Time Period
    printf("Enter the Time Period: \n");
    scanf("%d",&t);

    //n (only in case of Compond Interst)
    //printf("Enter n:\n");
    // scanf("%f",&n);

    //Simple Intrest
    SI = (p*r*t)/100;
    printf("%d\n",SI);

    // Compound Intrest
    //CI = 

    return 0;
}
