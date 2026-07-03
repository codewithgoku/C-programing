#include<stdio.h>
int main(){
    int num1,num2,result;
    char op;
    printf("Enter the first number\t");
    scanf("%d",&num1);
    printf("Enter the second number\t");
    scanf("%d",&num2);
    fflush(stdin);
    printf("Enter '+' for addition\nEnter '-' for subtraction\nEnter '*' for multiplication\nEnter '/' for division\n");
    scanf("%c",&op);
    printf("......................Sucessfully Enter your enter.....................\n");
    switch (op)
    {
    case '+':
        result=0;
        result=num1+num2;
        printf("The result=%d",result);
        break;
    case '-':
        result=0;
        result=num1-num2;
        printf("The result=%d",result);
        break;
    case '*':
        result=num1*num2;
        printf("The result=%d",result);
        break;
    case '/':
        result=0;
        result=num1/num2;
        printf("The result=%d",result);
        break;
    
    default:
    printf("Invaid enter press vaild enter");
        break;
    }
    return 0;
}