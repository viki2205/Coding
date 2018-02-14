/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
    
 


