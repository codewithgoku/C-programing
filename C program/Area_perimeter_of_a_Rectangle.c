//Area & Perimeter of a rectangle
#include<stdio.h>
void main(){
    float l,b,area,peri;
    printf("Enter length");
    scanf("%f",&l);
    printf("Enter breadth");
    scanf("%f",&b);
    area=l*b;
    peri=2*(l+b);
    printf("Area=%f\n perimeter=%f",area,peri);
}