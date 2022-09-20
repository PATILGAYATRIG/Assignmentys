//Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>
void ct(char str[]);
int main()
{
    char str[100],st[100];
    printf("Enter any string:");
    gets(str);
    printf("Repeated character:");
    ct(str);
    return 0;

    }
void ct(char str[])
{
    int m;
    for(int i=0;str[i]!='\0';i++)
    {
        m=1;
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j] && str[i]!=' ')
            {
            m++;
            str[j]='*';
            }
         }
           if(m>1 && str[i]!='*')
            printf("%c ",str[i]);
    }



}

