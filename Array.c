

#include <stdio.h>

int main()
{
    int a[10],max=0,min=100,i;
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d\t",a[i]);
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("\nLargest: %d",max);
    printf("\nSmallest: %d",min);
    return 0;
}



