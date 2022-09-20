// Write a function to count words in a given string
#include<stdio.h>
int ct(char st[]);

int main()
{
    char str[100];
    printf("Enter any string:");
    gets(str);
    printf("%d",ct(str));
    return 0;

}
int ct(char st[])
{
    int c=1;
    for(int i=0;st[i];i++)
    {

           if(st[i]==' '|| st[i]=='\n'|| st[i]=='\t')
           c=c+1;
    }
    return c;

}
