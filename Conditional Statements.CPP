#include<stdio.h>
void main()
{
int i,a[10],max=0,min=100,sum=0,mul=1;
for(i=0;i<4;i++)
scanf("%d",&a[i]);
for(i=0;i<4;i++)
{
if(max<a[i])
max=a[i];
}
printf("Largest: %d",max);
for(i=0;i<4;i++)
{
if(min>a[i])
min=a[i];
}
printf("\nSmallest: %d",min);
for(i=0;i<4;i++)
{
sum=sum+a[i];
}
printf("\n%d",sum);
if(sum%2==0)
printf("\tEVEN");
else
printf("\tODD");
for(i=0;i<4;i++)
{
mul=mul*a[i];
}
printf("\n%d",mul);
if(mul>100)
printf("\tGREATER");
else
printf("\tSMALLER");
}