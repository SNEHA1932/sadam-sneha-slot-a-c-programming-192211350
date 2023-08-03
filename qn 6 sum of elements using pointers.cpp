#include<stdio.h>
int main()
{
int arr[100],size;
int *p,sum=0,i;
scanf("%d",&size);
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
p=arr;
for(i=0;i<size;i++){
sum=sum+*p;
p++;
}
printf("%d\n",sum);
return 0;
}
