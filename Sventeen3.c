//Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
 char str[100],c;
 int count;
 printf("Enter any string:");
 fgets(str,100,stdin);
 for(int i=0;str[i];i++)
 {
     if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u')
        count++;
 }
 printf("Vowels in given string:%d",count);
 return 0;


}
