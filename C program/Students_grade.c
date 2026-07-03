#include<stdio.h>
int main(){
    int marks;
    printf("Enter the number\n");
    scanf("%d",&marks);
    if(marks>=90){
        printf("A grade");
    }
    else if(marks>=80){
        printf("B grade");
    }
    else if(marks>=70){
        printf("C grade");
    }
    else if(marks>=60){
        printf("D grade");
    }
    else
    printf("Fail");
    return 0;
}