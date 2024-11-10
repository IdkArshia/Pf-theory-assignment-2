#include <stdio.h>

// Function to print the horizontal histogram
void horizontal_histogram(int array[], int value_no) {
    printf("\nHorizontal Histogram:\n");
    int i, j;
    for (i = 0; i < value_no; i++) {
        printf("Value %d: ", i + 1);
        for (j = 0; j < array[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print the vertical histogram
void vertical_histogram(int array[], int value_no) {
    printf("\nVertical Histogram:\n");
    int max_h = 0;

    // Finding the maximum value to determine the height of the histogram
    int i;
    for (i = 0; i < value_no; i++) {
        if (array[i] > max_h) {
            max_h = array[i];
        }
    }

    // Print the histogram from top to bottom
    int height;
    for (height = max_h; height > 0; height--) {
        for (i = 0; i < value_no; i++) {
            if (array[i] >= height) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    // Printing the values at the bottom
    for (i = 0; i < value_no; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[100]; 
    int value_no; 

 
    printf("Enter the number of values: ");
    scanf("%d", &value_no);

    // take the values from the user
    printf("Enter the values:\n");
    int i;
    for (i = 0; i < value_no; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &array[i]); 
    }

    
    horizontal_histogram(array, value_no);
    

    vertical_histogram(array, value_no);

    return 0;
}
