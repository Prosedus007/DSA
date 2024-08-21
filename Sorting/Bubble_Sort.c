#include<stdio.h>
//swap function to swap the elements with the third variable
void swap(int *arr,int i,int j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j] = temp;
}

//Bubble sort algorithm
int bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr , j ,j+1);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

   
    bubble_sort(arr,n);
    printf("Sorted Array is : ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }


    return 0;
}