#include<stdio.h>
int main()
{
int i,length;
scanf("%d",&length);
int arr[length];
for(i=0;i<length;i++)
scanf("%d",&arr[i]);
for(i=0;i<length;i++)
if(arr[i]>0)
printf("%d\n",arr[i]);
for(i=0;i<length;i++)
if(arr[i]<0)
printf("%d\n",arr[i]);
return 0;
}
