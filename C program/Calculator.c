#include<conio.h>
#include<stdio.h>
int main()
{
    int  num1,num2,mul,sub=0,sum=0;
    float div;
int op;
printf("enter the two numbers\t");
scanf("%d%d",&num1,&num2);
printf("enter 1 for addition,enter 2 for subtraction,enter 3 for multiplication,enter 4 for division");
scanf("%d",&op);
switch(op){
    case 1:
    sum=num1+num2;
    printf("The result is %d",sum);
    break;
    case 2:
    sub=num1-num2;
    printf("The result is %d",sub);
    break;
    case 3:
    mul=num1*num2;
    printf("The result is %d",mul);
    break;
    case 4:
    div=(float)num1/num2;
    printf("The result is %f",div);
    break;
    

}
getch();
return 0;

}