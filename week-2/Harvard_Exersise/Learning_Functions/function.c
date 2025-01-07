#include <stdio.h>

// Declare variables
float num1;
float num2;
int num3;
int num4;

// prototype
float multiply_float(float num1, float num2);
int add_ints(int num1, int num2);

int main()

{

    // Write a function that would multiply two floating numbers
    float multiply_float(float num1, float num2);
    printf("The result of the multiplication is: %f\n", multiply_float(num1, num2));
    int add_ints(int num1, int num2);
    printf("The result of the multiplication is: %d\n", add_ints(num3, num4));

}

float multiply_float(float num1, float num2)

{

    printf("Enter first number for multiplication: ");
    scanf("%f", &num1);
    printf("Enter second number for multiplication: ");
    scanf("%f", &num2);

    float result = num1 * num2;

    return result;
}

int add_ints(int num3, int num4)

{

    printf("Enter first number for addition: \n");
    scanf("%d", &num3);
    printf("Enter second number for addition: \n");
    scanf("%d", &num4);
    int result = num3 + num4;
    return result;
}