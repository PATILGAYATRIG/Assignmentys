#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter coefficient of given quadratic equation:");
    scanf("%d%d%d",&a,&b,&c);
    n=b*b-4*a*c;
    if(n>0)
    {
        printf("roots of given quadratic equation is real and distinct");
    }
    else if(n==0)
    {
        printf("roots of given quadratic equation is real and equal");
    }
    else
    {
        printf("roots of given quadratic equation is imaginary");
    }
    return 0;

}


