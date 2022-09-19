//Write a program to reverse a string.
#include<stdio.h>
 #include<string.h>
 int main()
 {
  char str[5];
  printf("Enter any word:");
  scanf("%s",str);
  for(int i=4;i>=0;i--)
  {
   printf("%c",str[i]);
  }
 }
