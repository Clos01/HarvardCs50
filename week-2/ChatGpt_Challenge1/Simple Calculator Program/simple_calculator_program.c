#include <stdio.h>

// Prototype
void displayMenu();
int getUserChoice();
double add(double a, double b);

int main()
{
    int userInput;
    double a,b,result_add;
    displayMenu();
    getUserChoice();
    result_add = add(a,b);
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

    if (userInput == 1)
    {
        printf("User Chooses 1");
    }
    else if (userInput == 2)
    {
        printf("User Chooses 2");
    }
    else if (userInput == 3)
    {
        printf("User Chooses 3");
    }
    else if (userInput == 4)
    {
        printf("User Chooses 4");
    }

    return userInput;
}

double add(double a, double b)
{
  double a;
  double b;
    double results = a +b; 

    printf("What number do you choose to add: \n");
    scanf("%lf", &a);
    printf("What is your second number: \n");
    printf("results: %lf", &results);

    return results;
}