#include<stdio.h>
int main(){
     int a[20],i,x,n;
     int first,last,mid;
     printf("Enter the no. of elements \n");
     scanf("%d",&n);
     printf("Enter the elements \n");
     for(i=0;i<n;i++){
        scanf("%d", &a[i]);
     }

     printf("Enter the element to be searched \n");
     scanf("%d",&x);

    first=0;
    last=n-1;
    mid=(first+last)/2;
    while (first<=last)
    {
        if(a[mid]<x){
           first = mid+1;
         }
          else if(a[mid]==x){
          printf(" The element %d is found at location %d",x,mid+1);
          break;
          }
          else
          last=mid-1;
          mid=(first+last)/2;

          if(first>last){
            printf("Element is not found /n");
          }
    }
    return 0;
}
