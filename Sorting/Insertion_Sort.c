#include<stdio.h>


//Insertion sort Function
int insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Main function
int main(){
    int n;
    //Taking input the size of the array
    printf("Enter Size of array: ");
    scanf("%d",&n);
    int arr[n];

    //take inpute the element in the array
    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //Calling the insertion_sort function
    insertion_sort(arr,n);


    //Printing the sorted array
    printf("Sorted Array is : ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }


    return 0;
}