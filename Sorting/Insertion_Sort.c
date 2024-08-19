#include<stdio.h>

void swap(int *arr,int i,int j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j] = temp;
}

int insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
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

   
    insertion_sort(arr,n);
    printf("Sorted Array is : ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }


    return 0;
}