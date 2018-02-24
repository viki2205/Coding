

#include <stdio.h>
int fact(int n)
{
    if(n>=1)
    {
    int a;
    a = n * fact(n-1);
    return a;
    }
    else
    return 1;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("facorial of %d is:%d",n,fact(n));
    return 0;
}
    
 


