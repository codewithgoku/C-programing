#include<stdio.h>
int main(){
    int number;
    printf("numbers");
    scanf("%d",&number);
    if(number%2==0)
    printf("%dEven",number);
    else
    printf("%dOdd",number);
    return 0;
}