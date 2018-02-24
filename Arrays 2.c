#include<stdio.h>
void main()
{
    int n,i;
    float a[10],w,t,e,sum=0;
    printf("\nNo of tools:");
    scanf("%d",&n);
    printf("\nMaximum weight of each tool:");
    scanf("%f",&w);
    printf("\nMaximum total weight:");
    scanf("%f",&t);
    printf("\n Enter the weights:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>w)
        {
            e = a[i];
        }
    }
    if(e>w || sum>t)
    {
        printf("PARTY TIME!!");
    }
    else
    {
        printf("TIME TO FIGHT CRIME !");
    }
    
}


