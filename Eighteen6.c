//Write a function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
void alp(char str[]);
int main()
{
    char str[100];
    printf("Enter any string:");
    fgets(str,100,stdin);
     alp(str);
    return 0;
}
void alp(char str[])
{
    int m,n;
     m=n=0;
     for(int i=0;str[i];i++)
    {
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z'))
           m++;
        if(str[i]>='0' && str[i]<='9')
            n++;
    }
    if(m>=1 && n>=1)
        printf("Given string is alphanumeric");
    else
        printf("Given string is not alphanumeric");
}
