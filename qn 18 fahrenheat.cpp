#include<stdio.h>
int main()
{
void temperature();
temperature();
return 0;
}
void temperature()
{
float fahrenheat,celcius;
scanf("%f",&fahrenheat);
celcius=(fahrenheat-32)*5/9;
printf("celcius is:%f",celcius);
}
