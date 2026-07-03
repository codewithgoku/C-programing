
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("The large number is %d",a);
    }

    else
    printf("The large number id %d",b);
    return 0;
}