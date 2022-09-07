#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("given character is uppercase");
    }
    else if(ch>=97 && ch<=122 )
    {
        printf("given character is lowercase");
    }
    else
        printf("given is not a lowercase or uppercase character");
    return 0;
}

