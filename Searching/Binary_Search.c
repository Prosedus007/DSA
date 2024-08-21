#include<stdio.h>

//Linear Search funtion 
int binary_search(int arr[],int n,int key,int low,int high){

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
    //Taking the size of array from the user
    printf("Enter Size of array: ");
    scanf("%d",&n);
    int arr[n];

    //taking input from the user for  the array elements
    printf("Enter the elements in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    //taking input for the element to search in the  array
    printf("Enter the element to find int the Array: ");
    scanf("%d",&key);
    
    //calling binary search function 
    int x = binary_search(arr,n,key,0,n-1);

    //function will return the index of the element user searching for else it will return -1 
    printf("%d",x);


    return 0;
}