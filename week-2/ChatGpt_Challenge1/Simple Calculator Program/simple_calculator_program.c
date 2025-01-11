#include <stdio.h>

// Prototype
void displayMenu();
int getUserChoice();
double add();
double subtract();
double Division();
double multiplication();
int main()
{
    displayMenu();
    double userChoice = getUserChoice();
    if (userChoice == 1)
    {
        add();
    }
    else if (userChoice == 2)
    {
        subtract();
    }
    else if (userChoice == 3)
    {
        Division();
    }
    else if (userChoice == 4)
    {
       multiplication();
    }
    return 0;
}

// User Selection:
//  •	Prompt the user to select an option from the menu by entering the corresponding number (1-5).

void displayMenu()
{
    printf(" \n");

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
}

int getUserChoice()
{
    int userInput;

    printf(" ");

    printf("Number: ");

    scanf("%d", &userInput);

    return userInput;
}

double add()
{
    double a, b;

    printf("What number do you choose to add: \n");
    scanf("%lf", &a);
    printf("What is your second number: \n");
    scanf("%lf", &b);

    double results = a + b;
    printf("results: %lf", results);

    return results;
}

double subtract()
{
    double num1, num2;
    printf("What number do you choose to subtract: \n");
    scanf("%lf", &num1);
    printf("What number do you choose to subtract: \n");
    scanf("%lf", &num2);

    double results = num1 - num2;
    printf("results: %lf", results);

    return results;
}

double Division()
{
    double num1, num2;
    printf("What number do you choose to Division: \n");
    scanf("%lf", &num1);
    printf("What number do you choose to Division: \n");
    scanf("%lf", &num2);
    double results = num1 / num2;
    printf("results: %lf", results);
    return results;
}

double multiplication()
{
    double num1, num2;
    printf("What number do you choose to Multiplication: \n");
    scanf("%lf", &num1);
    printf("What number do you choose to Multiplication: \n");
    scanf("%lf", &num2);
    double results = num1 * num2;
    printf("results: %lf", results);
    return results;
}