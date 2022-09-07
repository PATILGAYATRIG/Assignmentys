#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n>0)
    printf("Given number is postive");
    else if(n==0)
        printf("Given number is zero");
    else
        printf("Given number is negative");
    return 0;
}

