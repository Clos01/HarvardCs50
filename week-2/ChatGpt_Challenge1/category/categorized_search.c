#include <stdio.h>
#include <string.h>

// Function declarations
void displayMessage(char usrInput[]);
void displayMessageLogic(char usrInput[]);
void searchingCategoryLogic(char usrInput[], char *Math[], int MathLength, char *Science[], int ScienceLength, char *Literature[], int LiteratureLength);

int main()
{
    // Declaring arrays for categories
    //adjust *
    char *Math[] = {"Algebra", "Calculus", "Geometry", "Statistics", "Trigonometry", "Linear Algebra"};
    char* Science[] = {"Biology", "Chemistry", "Physics", "Astronomy", "Geology", "Environmental Science"};
    char *Literature[] = {"Hamlet", "Macbeth", "The Odyssey", "The Great Gatsby", "Pride and Prejudice", "1984"};

    // Calculate lengths of the arrays
    int MathLength = sizeof(Math) / sizeof(Math[0]);
    int ScienceLength = sizeof(Science) / sizeof(Science[0]);
    int LiteratureLength = sizeof(Literature) / sizeof(Literature[0]);
    // Array to store user input
    char displayingMessage[100];

    // Call functions
    displayMessage(displayingMessage);
    displayMessageLogic(displayingMessage);
    searchingCategoryLogic(displayingMessage, Math, MathLength, Science, ScienceLength, Literature, LiteratureLength);

    return 0;
}

// Function to display a message and get input
void displayMessage(char usrInput[])
{
    printf("\nWhat are you searching for:\n");
    fgets(usrInput, 100, stdin); // Read input, allowing multi-word input
    usrInput[strcspn(usrInput, "\n")] = '\0'; // Remove newline character
}

// Function to confirm the user's input
void displayMessageLogic(char usrInput[])
{
    printf("You entered: %s\n", usrInput);
}

// Function to search for the input in the categories
void searchingCategoryLogic(char usrInput[], char *Math[], int MathLength, char *Science[], int ScienceLength, char *Literature[], int LiteratureLength)
{
    // Search in Math category
    for (int i = 0; i < MathLength; i++)
    {
        if (strcmp(Math[i], usrInput) == 0)
        {
            printf("Found \"%s\" in Math at index %d\n", usrInput, i);
            return; // Exit function after finding a match
        }
    }

    // Search in Science category
    for (int i = 0; i < ScienceLength; i++)
    {
        if (strcmp(Science[i], usrInput) == 0)
        {
            printf("Found \"%s\" in Science at index %d\n", usrInput, i);
            return; // Exit function after finding a match
        }
    }

    for(int i =0; i < LiteratureLength; i++)
    {
        if(strcmp(Literature[i], usrInput) == 0)
        {
            printf("Found \"%s\" in Literature at index %d\n", usrInput, i);
            return; 
        }
    }

    // If not found in either category
    printf("\"%s\" not found in Math or Science or Literature.\n", usrInput);
}