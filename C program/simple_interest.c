//Calculation of simple interest
#include<stdio.h>
int main(){
    float si,p,r,d;
    printf("Enter principal amount");
    scanf("%f",&p);
    fflush(stdin);

    printf("Enter rate of interest");
    scanf("%f",&r);
    fflush(stdin);

    printf("Enter time");
    scanf("%f",&d);
    fflush(stdin);
    si=(p*r*d)/100;
    printf("Simple interest=%.2f",si);
    return 0;
}