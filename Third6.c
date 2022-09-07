#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any  two number :");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("a is greater than  b");
    else if(a==b)

        printf("%d",a);
    else
        printf("b is greater than a");

    return 0;
}
