#include <stdio.h>

int main() {
    int a[10][10], t[10][10];
    int n, i, j;
    int symmetric = 1, skew = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            t[i][j] = a[j][i];
        }
    }

    printf("Transpose Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    // Check symmetric and skew-symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (a[i][j] != t[i][j])
                symmetric = 0;

            if (a[i][j] != -t[i][j])
                skew = 0;
        }
    }

    if (symmetric)
        printf("Matrix is Symmetric\n");
    else if (skew)
        printf("Matrix is Skew-Symmetric\n");
    else
        printf("Matrix is Neither\n");

    return 0;
}