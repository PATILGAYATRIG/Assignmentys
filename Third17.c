#include<stdio.h>
int main()
{
    float a,b,c ;
    printf("Enter the length of sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a )
    {
        printf("Triangle is valid");
    }
    else
    {
         printf("Triangle is not valid");
    }
    return 0;
}
