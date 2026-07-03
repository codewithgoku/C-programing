#include<stdio.h>
int main(){
    int num1,num2,sum,product;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter the second number");
    scanf("%d",&num2);
    sum=num1+num2;
    product=num1*num2;
    printf("First number=%d\n",num1);
    printf("second number=%d\n",num2);
    printf("sum=%d\n",sum);
    printf("product=%d\n",product);
    return 0;
}