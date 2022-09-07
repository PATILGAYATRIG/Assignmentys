#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n%7==0 && n%5==0)
    {
        printf("Given number is divisible by 7 and 5");

    }
    else if(n%5==0)
    {
        printf("Given number is divisible by 5");

    }
    else if(n%7==0)
    {
       printf("Given number is divisible by 7");
    }
    else
    {
       printf("Given number is not divisible by 5 and 7");
    }
}
