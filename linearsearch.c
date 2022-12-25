#include<stdio.h>
int main(){
     int a[20],i,x,n;
     printf("Enter the no. of elements \n");
     scanf("%d",&n);
     printf("Enter the elements \n");
     for(i=0;i<n;i++){
        scanf("%d", &a[i]);
     }

     printf("Enter the element to be searched \n");
     scanf("%d",&x);

     for(i=0;i<n;i++){
       if(a[i]==x)
       break;
     }
     if(i<n){
        printf("Element found at index %d",i);
     }
     else{
        printf("Element not found");
     }

   return 0;

}
