//Write a function to transform string into uppercase
#include<stdio.h>
int upr(char st[]);
int main()
{
    char str[100];
    printf("Enter any string:");
    fgets(str,100,stdin);
    // printf("second string:%s",strupr(str));

    printf("second string:%s",upr(str));
    return 0;

}

int upr(char st[])
{
   int i;
   for(i=0;st[i];i++)
   {
       if(st[i]>='a' && st[i]<='z')
        st[i]=st[i]-32;
   }
   return st;
}

