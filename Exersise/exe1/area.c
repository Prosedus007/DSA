#include<stdio.h>
#define PI 3.14159265359

int main(){
    int radius;
    printf("Radius of the Circle: ");
    scanf("%d",&radius);
    float area = radius*radius*PI;

    printf("Area of the circle is: %f",area);
}