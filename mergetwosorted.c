 #include <stdio.h>
#include <stdlib.h>
void Merge(int arr[], int left, int mid, int right)
{
    int i,j,k;
    int n=mid-left+1;
    int m=right-mid;
    int a[n],b[m];
    for(i=0;i<n;i++)
        a[i]=arr[left+i];

    for(j=0;j<m;j++)
        b[j]=arr[mid+1+j];

    i = 0;
    j = 0;
    k = left;
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
}
void Merge_Sort(int arr[], int left, int right)
{
    if (left<right)
    {
        int mid=left+(right-left)/2;
        Merge_Sort(arr,left,mid);
        Merge_Sort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}
void main()
{
    int size,arr[20];
    printf("AVANISH DUBEY\n");
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    Merge_Sort(arr,0,size-1);
    printf("The sorted array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
