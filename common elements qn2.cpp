#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5,};
int b[5]={1,5,3,7,6};
int i,j;
for(i=0;i<5;i++){
for(j=0;j<5;j++){
if(a[i]==b[j]){
printf("\n common elements is:%d",a[i],b[j]);
}
}
}
return 0;
}
