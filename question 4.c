#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    int evenCount = 0; 

    
    printf("Enter values for the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter the value for element %d: ", i + 1);
        scanf("%d", &array[i]);

        // Check if the entered number is even
        if (array[i] % 2 == 0) {
            evenCount = evenCount + 1;
        }
    }

    printf("Number of even numbers: %d\n", evenCount);

    return 0; 
}