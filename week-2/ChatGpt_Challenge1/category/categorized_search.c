#include <stdio.h>
#include <string.h>

// Function declarations
void displayMessage(char usrInput[]);
void displayMessageLogic(char usrInput[]);
void searchingCategoryLogic(char usrInput[], char *Math[], int MathLength);
int main()
{
    // Declaring arrays
    char *Math[] = {"Algebra", "Calculus", "Geometry", "Statistics", "Trigonometry", "Linear Algebra"};
    char *Science[] = {"Biology", "Chemistry", "Physics", "Astronomy", "Geology", "Environmental Science"};
    char *Literature[] = {"Hamlet", "Macbeth", "The Odyssey", "The Great Gatsby", "Pride and Prejudice", "1984"};

    int MathLength = sizeof(Math) / sizeof(Math[0]);


    // declaring an array to store user input
    char displayingMessage[100];

    
    // Call functions
    displayMessage(displayingMessage);
    displayMessageLogic(displayingMessage);
    searchingCategoryLogic(displayingMessage, Math, MathLength) ;

    return 0;
}
void displayMessage(char usrInput[])
{
    printf("\n");
    printf("What are you searching for: \n");
    printf("\n");
    scanf("%s", usrInput); // Read input from the user
}

// check logic for displayMessage

void displayMessageLogic(char usrInput[])
{
    printf("You entered: %s\n", usrInput);
}

void searchingCategoryLogic(char usrInput[], char *Math[], int MathLength)
{

for(int i = 0; i < MathLength; i++)
{
    if(strcmp(Math[i], usrInput) == 0)
    {
        printf("Found \"%s\" in Math at index %d\n", usrInput, i);
            return; // Exit function after finding a match
    }
   
}
 printf("\"%s\" not found in Math.\n", usrInput);
}