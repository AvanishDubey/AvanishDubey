#include<stdio.h>
int main(){
    int n,arr[100];
    int temp=0;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    printf("Enter the elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0 ; i < n-1 ; i++){
        for (int j= 0; j<=n-i-1 ;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("The element in sorted array are \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;

}
