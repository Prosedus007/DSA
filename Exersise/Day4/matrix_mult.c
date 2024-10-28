#include<stdio.h>

int linear_Search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int size;
    //taking the input for the size of the array
    printf("Enter Size of array: ");
    scanf("%d",&size);
    int arr[size];

    //taking the input for the element in the array
    printf("Enter the elements in the array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    //taking input for the element to search in the array
    printf("Enter the element to find int the Array: ");
    scanf("%d",&key);
    
    //calling linear search function
    int x = linear_Search(arr,size,key);

    //function will return the index of the element user searching for else it will return -1 
    printf("%d",x);


    return 0;
}