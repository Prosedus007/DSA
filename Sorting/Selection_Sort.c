#include<stdio.h>
//swap function to swap the number with the third variable
void swap(int *arr,int i,int j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j] = temp;
}

//selection sort algorithm
int selection_sort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr, i,min_index);
    }
}

int main(){
    int n;
    //Taking the size of array from the user
    printf("Enter Size of array: ");
    scanf("%d",&n);
    int arr[n];

    //taking input from the user for  the array elements
    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    //Calling selection sort function
    selection_sort(arr,n);

    //Printing Sorted array
    printf("Sorted Array is : ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }


    return 0;
}