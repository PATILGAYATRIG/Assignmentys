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
    else if(ch>=48 && ch<=57)
    {
        printf("given character is digit");
    }
    else if(ch>=32 && ch<=47 || ch>=58 && ch<=64)
    {
        printf("given character is special character");
    }
      else if(ch>=91 && ch<=96 || ch>=123 && ch<=126)
    {
        printf("given character is special character");
    }
    else
        printf("none");
    return 0;
}

