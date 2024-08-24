#include <stdio.h>

int main() {
    float n;
    int m;
    float tax = 0.0;

    printf("Enter Income: ");
    scanf("%f", &n);
    printf("Enter number of dependents: ");
    scanf("%d", &m);
    // printf(")");

    if (n <= 30000) {
        tax = 0.0; 
    } else if (n > 30000 && n <= 60000) {
        tax = 0.1 * n;  
        if (m > 2) {
            tax *= 0.95; 
        }
    } else if (n > 60000) {
        tax = 0.2 * n; 
        if (m > 2) {
            tax *= 0.9;  
        }
    }

    printf("\nTax: $%.2f\n", tax);

    return 0;
}
