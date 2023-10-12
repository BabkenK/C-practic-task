#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int array[size];
    double sum = 0;

    printf("Enter values for the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter the value for element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum = sum + array[i]; // This line calculates the sum
    }

    // Calculate and print the arithmetic mean of the elements
    double mean = sum / size;
    printf("Arithmetic Mean of the elements: %.2lf\n", mean);

    return 0; 
}