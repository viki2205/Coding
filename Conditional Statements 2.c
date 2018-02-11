#include <stdio.h>
#include<string.h>

void main()
{
   int a,b,n;
    char c[10],e[]="orange";
    float d;
    scanf("%d%d",&a,&b);
    
    scanf("%s",c);
    scanf("%f",&d);
    n=strcmp(c,e);
    if((a%2==0) && (b%3==0) && (n==0) && (d<10000))
    
    {
        printf("ACCCEPTED");
        
    }
    else
    {
        printf("DECLINED");
    }

}



