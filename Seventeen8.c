//Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char str[100],tsd[100];
    int i;
    printf("Enter any string:");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        tsd[i]=str[i];

    }
    tsd[i]='\0';
    printf("Copy string:%s",tsd);


}
