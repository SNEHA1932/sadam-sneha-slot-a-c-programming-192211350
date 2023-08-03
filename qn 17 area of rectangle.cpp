#include<stdio.h>
int main()
{
void area();
area();
return 0;
}
void area()
{
int area,l,b,h;
scanf("%d%d%d",&l,&b,&h);
area=l*b*h;
printf("%d",area);
}
