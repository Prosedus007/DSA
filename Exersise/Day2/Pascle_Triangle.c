#include <stdio.h>

int main() {
    int rows, coef = 1, space, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++) {

    for(int j = 1; j<= rows - i; j++){
        printf(" ");
    }
    
        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%2d", coef);
        }
        printf("\n");
    }

    return 0;
}