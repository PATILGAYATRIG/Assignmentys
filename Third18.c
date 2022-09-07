#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number:");
    scanf("%d",&n);
    if(n==1 || n==3 )
        printf("Given month contains 31 days");
    return 0;
}

