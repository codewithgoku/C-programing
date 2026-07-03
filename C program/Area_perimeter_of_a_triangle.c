//Area and Perimeter of a triangle
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float peri,s,area;
    printf("Enter 1st side of a triangle");
    scanf("%f",&a);
    printf("Enter 2nd side of a triangle");
    scanf("%f",&b);
    printf("Enter 3rd side of a triangle");
    scanf("%f",&c);
    peri=a+b+c;
    s=peri/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area=%.2f\nperimeter=%.2f",area,peri);
    return 0;
    
}
