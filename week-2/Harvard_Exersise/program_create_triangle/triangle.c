#include <stdio.h>
#include <stdbool.h>

// Declare our function
bool valid_triangle(float side_A, float side_B, float side_C);

int main(void) {
    float side_A, side_B, side_C;

    // Prompt user for all three sides
    printf("Enter side A: ");
    scanf("%f", &side_A);

    printf("Enter side B: ");
    scanf("%f", &side_B);

    printf("Enter side C: ");
    scanf("%f", &side_C);

    // Check if these sides form a valid triangle
    if (valid_triangle(side_A, side_B, side_C)) {
        printf("The sides form a valid triangle.\n");
    } else {
        printf("The sides do NOT form a valid triangle.\n");
    }

    return 0;
}

// Define the triangle validation function
bool valid_triangle(float side_A, float side_B, float side_C) {
    // Check for positive length
    if (side_A <= 0 || side_B <= 0 || side_C <= 0) {
        return false;
    }
    // Check the triangle inequality
    return  (side_A + side_B > side_C) &&
            (side_A + side_C > side_B) &&
            (side_B + side_C > side_A);
}