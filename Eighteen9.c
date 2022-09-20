//Write a function to reverse a string word wise.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Hello,How are you?";
    int m=strlen(s)-1,n;
    for(int i=0;i<=m;i++)
    {
        n=s[i];
        s[i]=s[m];
        s[m]=n;
        m--;

    }
    printf("%s",s);
    for(int j=0;s[j];j++)
    {
        if()
    }

}
