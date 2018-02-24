

#include <stdio.h>
 
void main()
{
    int a[10],b[10],i,j,n,temp=0,reverse=0;
    printf("Enter the no of array elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        temp = a[i];
     for(j=n-1;j>=0;j--)
     {
         b[j] = a[j];
         reverse = b[j];
     }
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d",b[j]);
    }    
        if(temp == reverse)
        {
            printf("\t YES");
        }
        else
        {
           printf("\t NO");
        }
    
    
     }
 


