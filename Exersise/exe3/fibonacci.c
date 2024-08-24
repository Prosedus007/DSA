#include<stdio.h>
//Recursively
long fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fib(n-1)+fib(n-2);
}
//Iteratively
long fib_iteratively(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    n--;
    int a = 0;
    int b = 1;
    
    while(n--){
        int temp = a+b;
        a = b;
        b = temp;
        
    }
    return b;
}

int main(){ 
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    long a = fib_iteratively(n);
    printf("%d\n",a);
    long b = fib(n);
    printf("%d",b);
}