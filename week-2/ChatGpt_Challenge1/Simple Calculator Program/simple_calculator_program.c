#include <stdio.h>

// Prototype
void displayMenu();
int getUserChoice();
double add();
double subtract();
double getNumber(const char *prompt);
double performDivision(double num1, double num2);
char playAgain();

double Division();
double multiplication();
int main()
{
    char replay = 'y'; // Initialize replay to 'y' to enter the loop

    while (replay == 'y')
    {
        displayMenu();
        int userChoice = getUserChoice();

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
        else if (userChoice == 5)
        {
            replay = 'y'; // Go back to the menu directly
        }
        else if (userChoice == 6)
        {
            printf("Exiting... Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        replay = playAgain(); // Ask the user if they want to play again
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
    printf("5. play Again\n");
    printf("6. Exit\n");

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

double getNumber(const char *prompt)
{
    double number;
    printf("%s", prompt);
    scanf("%lf", &number);
    return number;
}

double performDivision(double num1, double num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by Zero!\n");
        return 0;
    }
    else
    {
        return num1 / num2;
    }
}

double Division()
{

    double num1 = getNumber("Enter the First Number: ");
    double num2 = getNumber("Enter the second Number: ");
    double results = performDivision(num1, num2);
    if (results == 0)
    {
        printf("Ignore results: %lf", results);
    }
    else
    {
        printf("results: %lf", results);
    }

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
char playAgain()
{
    char answer;
    // Clear input buffer
    while (getchar() != '\n'); 

    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &answer); // Note the space before %c to ignore leading whitespace

    if (answer == 'y' || answer == 'Y')
    {
        return 'y'; // Return 'y' to indicate replay
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("Thank you for using the calculator!\n");
        return 'n'; // Return 'n' to indicate exit
    }
    else
    {
        printf("Invalid input. Exiting...\n");
        return 'n';
    }
}