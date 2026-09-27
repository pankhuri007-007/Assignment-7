#include <stdio.h>

int main() {
    int n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[100];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[100];

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int arr3[200];

    // Copy first array
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy second array
    for (i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}