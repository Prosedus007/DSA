#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int sum =0;

    while(n){
        int temp = n%10;
        n = n/10;
        sum +=temp;
    }
    printf("The sum is %d",sum);
}