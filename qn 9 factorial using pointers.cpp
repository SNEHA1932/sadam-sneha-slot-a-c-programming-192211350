#include<stdio.h>
int main()
{
int num,fact=1;
int *pn,*pf;
scanf("%d",&num);
pn=&num;
pf=&fact;
do{
*pf=(*pf)*(*pn);
*pn=*pn-1;
}
while(*pn>0);
printf("%d\n",fact);
return 0;
}
