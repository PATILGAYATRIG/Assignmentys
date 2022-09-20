//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void pal(char st[]);
int main()
{
    char str[100];
    printf("Enter any string:");
    gets(str);
    pal(str);
    return 0;
}
void pal(char s[])
{
    int n,m=0,i;
    n=strlen(s);
    for( i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
            m++;
    }
    if(m==i)
      printf("Given string is palindrome");
  else
      printf("Given string is not palindrome");

}

