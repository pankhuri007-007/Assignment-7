#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1, diagonal = 1;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal sums
    for (i = 0; i < n; i++) {
        mainSum += a[i][i];
        secondarySum += a[i][n - 1 - i];
    }

    // Check matrix type
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (i > j && a[i][j] != 0)
                upper = 0;

            if (i < j && a[i][j] != 0)
                lower = 0;

            if (i != j && a[i][j] != 0)
                diagonal = 0;
        }
    }

    printf("Main diagonal sum = %d\n", mainSum);
    printf("Secondary diagonal sum = %d\n", secondarySum);

    if (diagonal)
        printf("Diagonal Matrix\n");
    else if (upper)
        printf("Upper Triangular Matrix\n");
    else if (lower)
        printf("Lower Triangular Matrix\n");
    else
        printf("None of these\n");

    return 0;
}