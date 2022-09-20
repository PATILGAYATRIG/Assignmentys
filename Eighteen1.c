//Write a function to calculate length of the string
#include<stdio.h>
int length(char st[]);
int main()
{
    char str[100];
    printf("Enter any string:");
    gets(str);
    printf("Length of string:%d",length(str));
    return 0;

}
int length(char st[])
{
    int i;
    for(i=0;st[i]!='\0';++i);
    return i;
}
