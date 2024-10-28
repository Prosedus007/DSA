#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        int temp = i*n;
        if(i!=10){
            printf("%d  *  %d   =  %d\n",n,i,temp);
        }else{
            printf("%d  *  %d  =  %d\n",n,i,temp);
        }
        
    }
    return 0;
}