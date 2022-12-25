#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,n,m;
    printf("enter no of rows and columns");
    scanf("%d%d",&n,&m);
    printf("enter elements of A");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of matrix A is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

}
