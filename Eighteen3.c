// Write a function to compare two strings
 #include<stdio.h>
 #include<string.h>
 void same(char st[100],char ts[100]);
 int main()
 {
    char str1[100],str2[100];
    printf("str1:");
    fgets(str1,100,stdin);
    printf("str2:");
    fgets(str2,100,stdin);
    same(str1,str2);
    return 0;

 }
void same(char st[100],char ts[100])
{
    int i=0,m,n;
    m=strlen(st);
    n=strlen(ts);
 while(st[i]!='\0'&& st[i]==ts[i])
  {

    i++;
}

if(m==i)
    printf("Given strings are equal");
else if(m>n)
    printf("str1 is greater than str2");
else
    printf("str1 is less than str2");


}
