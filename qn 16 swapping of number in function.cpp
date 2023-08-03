#include<stdio.h>
int main()
{
void swap();
swap();
return 0;
}
void swap()
{
int temp=0,a,b;
scanf("%d%d",&a,&b);
temp=b;
b=a;
a=temp;
printf("%d%d",a,b);
}
