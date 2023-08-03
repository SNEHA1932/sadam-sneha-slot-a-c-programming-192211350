#include<stdio.h>
int main()
{
int i,max,min,length;
scanf("%d",&length);
int arr[length];
for(i=0;i<length;i++)
scanf("%d",&arr[i]);
max=arr[0];
min=arr[0];
for(i=0;i<length;i++){
if(arr[i]>max)
max=arr[i];}
for(i=0;i<length;i++){
if(arr[i]<min)
min=arr[i];}
printf("max difference is:%d",max-min);
return 0;
}
