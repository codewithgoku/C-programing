#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    if(num1>num2){
        printf("Greater number =%d\n",num1);
    }
    else if(num2>num1){
        printf("Greater number=%d\n",num2);
    }
    else{
        printf("EQUAL\n");
    }
    return 0;

}