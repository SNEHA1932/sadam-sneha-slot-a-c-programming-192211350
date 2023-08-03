#include<stdio.h>
#include<string.h>
int main()
{
char*s;
int len,i;
printf("\n enter a string:");
gets(s);
len=strlen(s);
printf("\n reverse of the string is:");
for(i=len;i>=0;i--)
scanf("%c",*(s+i));
return 0;
}
