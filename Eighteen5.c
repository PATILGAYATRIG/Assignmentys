// Write a function to transform a string into lowercase
#include<stdio.h>
int lwr(char st[]);
int main()
{
    char str[100];
    printf("Enter any string:");
    fgets(str,100,stdin);
   // printf("second string:%s",strlwr(str));
    printf("second string:%s",lwr(str));
    return 0;

}
int lwr(char st[])
{
   int i;
   for(i=0;st[i];i++)
   {
       if(st[i]>='A' && st[i]<='Z')
        st[i]=st[i]+32;
   }
   return st;
}

