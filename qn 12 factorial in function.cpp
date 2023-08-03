#include<stdio.h>
int main()
{
void factorial();
factorial();
return 0;
}
void factorial()
{
int i,fact=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
fact=fact*i;
}
printf("%d is factorial:",fact);
}
