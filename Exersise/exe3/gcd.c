#include<stdio.h>
//reccursively
int gcd(int n,int m){
    if(n==0) return m;
    if(m==0) return n;

    if(n>m) return gcd(n-m,m);
    else return gcd(n,m-n);

}

//iteratively
int gcd_iterrative(int n,int m){
    while(n!=0 || m!=0){
        if(n==0) return m;
        if(m==0) return n;
        if(n>m) n=n-m;
        else m=m-n;


    }
    
}

int main(){ 
    int n,m;
    printf("Enter the two number: ");
    scanf("%d %d",&n,&m);
    int a = gcd_iterrative(n,m);
    printf("%d\n",a);
    int b = gcd(n,m);
    printf("%d",b);
}