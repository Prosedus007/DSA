#include<stdio.h>
float Average_array(int *arr,int n){
    float sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum/n;
}

int Search(int *arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}

int Minimum_of_array(int *arr,int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // printf("%f\n",Average_array(arr,n));
    // printf("%d\n",Minimum_of_array(arr,n));
    int key,s;
    scanf("%d",&key);
    printf("%d\n",Search(arr,n,key));
}