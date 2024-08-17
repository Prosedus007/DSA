#include<stdio.h>

int linear_Search(int arr[],int size,int target){

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int size;
    printf("Enter Size of array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the ements in the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter the element to find int the Array: ");
    scanf("%d",&target);
    
    int x = linear_Search(arr,size,target);
    printf("%d",x);


    return 0;
}