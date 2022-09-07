#include<stdio.h>
int main()
{
    int n;
    printf("Enter the any number:");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
    {
        printf("Given number is divisible by 3 and 2");
    }
    else if(n%2==0)
    {
        printf("Given number is  divisible by 2");
    }
    else if(n%3==0)
    {
       printf("Given number is  divisible by 3");
    }
    else
    {
        printf("Given number is not divisible by 3 and 2");
    }
    return 0;
}
