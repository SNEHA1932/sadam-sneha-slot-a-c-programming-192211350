#include<stdio.h>
int main()
{
int x,y,*p1,*p2,temp;
scanf("%d%d",&x,&y);
p1=&x;
p2=&y;
temp=*p2;
*p2=*p1;
*p1=temp;
printf("%d%d",x,y);
return 0;
}
