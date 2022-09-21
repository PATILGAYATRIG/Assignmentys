//Write a function to reverse a string word wise.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="Hello How are you";
    int m=strlen(s),n=0,t;
    printf("%s\n",strrev(s));
    for(int i=0;i<=m;i++)
    {
        if(s[i]==' '||i==m)
        {
           for(int j=i-1;j>=n;j--)
           {
               printf("%c",s[j]);
           }
           printf(" ");
           n=i;
        }
    }



}
