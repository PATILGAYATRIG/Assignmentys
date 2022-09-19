/* Write a program in C to count the total number of alphabets, digits and special characters in a string.*/
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter any string:");
    fgets(str,100,stdin);
    int m=0,n=0,k=0;
    for(int i=0;str[i];i++)
    {
        if((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90) )
          m++;
        else if(str[i]>=48 && str[i]<=57)
            n++;
         else
           k++;


    }
    printf("Total number of alphabets:%d",m);
    printf("\nTotal number of digits:%d",n);
    printf("\nTotal number of special character:%d",k);
}

