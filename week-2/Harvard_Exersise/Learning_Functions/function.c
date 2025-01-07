#include <stdio.h>

    float num1;
    float num2;
float multiplyFloat(float num1, float num2);
int main()
{
//Write a function that would multiply two floating numbers     
float multiplyFloat(float num1, float num2);
printf("The result of the multiplication is: %f\n", multiplyFloat(num1, num2));
}

float multiplyFloat(float num1, float num2)
{
    printf("Enter first number for multiplication: ");
    scanf("%f", &num1);
    printf("Enter second number for multiplication: ");
    scanf("%f", &num2);

    float result = num1 * num2;
    return result;
}