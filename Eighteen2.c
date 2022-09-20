//Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
void rev(char st[]);
int main()
{
    int n;
    printf("Enter the size of string:");
    scanf("%d",&n);
    char str[n];
    printf("Enter any string:");
    scanf("%s",str);
    //printf("reverse:%s",strrev(str));
    printf("Reverse the string:");
    rev((str));
    return 0;
}
void rev(char st[])
{
    int i;
    for(i=0;st[i];i++);
    for(int j=i;j>=0;j--)
    {
        printf("%c",st[j]);
    }

}



