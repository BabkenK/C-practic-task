#include <stdio.h>

int main() {
    int size;
    
    enter the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);


    int array1[size], array2[size];

    enter values for the first array
    printf("Enter values for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter the value for element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    enter values for the second array
    printf("Enter values for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter the value for element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Calculate and print the product of elements with the same indices
    printf("Product of corresponding elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, array1[i] * array2[i]);
    }

    return 0;
}