#include<stdio.h>
#include <stdbool.h>

int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int a = isPrime(n);
    printf("Is prime %d",a);
}