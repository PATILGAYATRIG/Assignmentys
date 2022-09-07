#include<stdio.h>
int main()
{
    int n;
    printf("Enter any leap year:");
    scanf("%d",&n);
    if(n%400==0)
        printf("Given year is leap year");
    else if(n%100==0)
        printf("Given year is not leap year");
    else if(n%4==0)
        printf("Given year is  leap year");
    else
        printf("Given year is not leap year");

    return 0;

}
