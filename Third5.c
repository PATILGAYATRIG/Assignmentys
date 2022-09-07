#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n>=100)
    {
        if(n<999)
            printf("Given number is three digit number");
    else

        printf("Given number is not three digit number");
    }
    return 0;
}
