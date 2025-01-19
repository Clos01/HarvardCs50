#include <stdio.h>

// Function prototypes
int userInputNum();
int linearSearch(int array[], int size, int target);

int main() {
    // Array of numbers
    int arrayOfNumbers[] = {12, 5, 8, 21, 30, 15};
    int size = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]); // Calculate size of the array

    // Get user input
    int userInput = userInputNum();

    // Perform linear search
    int result = linearSearch(arrayOfNumbers, size, userInput);

    // Print the result
    if (result != -1) {
        printf("Number %d found at index %d\n", userInput, result);
    } else {
        printf("Number %d not found in the array.\n", userInput);
    }

    return 0; // Return success
}

// Function to get user input
int userInputNum() {
    int userInput;
    printf("Please input a number: ");
    scanf("%d", &userInput);
    return userInput;
}

// Function to perform linear search
int linearSearch(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) { // If target matches array element
            return i; // Return index
        }
    }
    return -1; // Return -1 if not found
}
