#include<stdio.h>
int main()
{
void fibonacci();
fibonacci();
return 0;
}
void fibonacci()
{
int i,t1=0,t2=1,n,t3=t1+t2;
scanf("%d",&n);
printf("fibonacci series:%d%d",t1,t2);
for(i=3;i<=n;i++){
printf("%d",t3);
t1=t2;
t2=t3;
t3=t1+t2;
}
}
