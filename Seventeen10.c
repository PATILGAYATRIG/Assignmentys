//Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
    char str[100],x;
    int k=0;
    printf("Enter any string:");
    fgets(str,100,stdin);
    printf("Enter any character:");
    scanf("%c",&x);
    for(int i=0;str[i];i++)
    {
        if(str[i]==x)
            k++;

    }
    printf("Frequency of character %c:%d",x,k);
}
