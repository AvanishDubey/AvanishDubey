#include<stdio.h>
void main()
{
int i,j,k,a[3][3],b[3][3],c[3][3],n;
printf("enter the element of matrix A");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
{
    scanf("%d",&a[i][j]);
}
}
printf("enter the element of matrix B");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
{
    scanf("%d",&b[i][j]);
}
}
printf("the matrix addition is");
   for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    printf("%d",c[i][j]);
    }
    printf("\n");
}}
