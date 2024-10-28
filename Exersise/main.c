#include<stdio.h>

int main(){
    int * pc ,c=5;
    pc =c;
    printf("%d\n",c);
    printf("%p",pc);
    return 0;
}