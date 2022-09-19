//Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter any word:");
    fgets(str,50,stdin);
    int k;
    for(int i=0;str[i];i++)
    {
        k=0;
        if(str[i]>=97 && str[i]<=122)
        {
            while(str[i]!=97)
            {
              str[i]=str[i]-1;
              k++;
            }
            printf("%c",65+k);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
  return 0;
}
