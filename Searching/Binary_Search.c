#include<stdio.h>

int linear_Search(int arr[],int n,int key,int low,int high){
    

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            high = mid-1;
        }else{
            low = mid+1; 
        }
    }
    
    return -1;
}

int main(){
    int n;
    printf("Enter Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the ements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the element to find int the Array: ");
    scanf("%d",&key);
    
    int x = linear_Search(arr,n,key,0,n-1);
    printf("%d",x);


    return 0;
}