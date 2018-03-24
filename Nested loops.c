#include <stdio.h>

int main()
{
    int a[10][10], b[10][10],c[10][10], r1, r2, c1, c2, i, j, k;

    printf("Matrix 1:");
    scanf("%d %d", &r1, &c1);

    printf("Matrix 2:");
    scanf("%d %d",&r2, &c2);
    if (c1 != r2)
    {
        printf("Not Defined\n");
    }
    printf("\nEnter Matrix 1:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    printf("\nEnter Matrix 2:\n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
        {
            c[i][j] = 0;
        }
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
            for(k=0; k<c1; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++)
        {
            printf("%d \n ",c[i][j]);
            
        }
    return 0;
}