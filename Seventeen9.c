// Write a C program to sort a string array in ascending order
#include<stdio.h>
#include<string.h>
int main()
 {
     char str[ ]="gayatri";
     int fre[150]={0};
     int i=0;
     while(str[i]!='\0')
     {
        fre[str[i]]++;
        i++;
     }
     for(i=0;i<150;i++)
     {
         if(fre[i]!=0)
         {
                printf("%c",i);
         }

     }
return 0;


 }
