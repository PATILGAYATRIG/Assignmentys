//Write a program to count the occurrence of a given character in a given string
#include<stdio.h>
int main()
{
    char str[100],x;
    int k=0;
    printf("Enter any string:");
    fgets(str,100,stdin);
    printf("Enter any character:");
    scanf("%c",&x);
    for(int i=0;str[i];i++)
    {
        if(str[i]==x)
            k++;

    }
    printf("Occurrence of character %c:%d",x,k);
}

