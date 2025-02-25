#include <stdio.h>
#include <string.h>

// Objective
// Write a program that searches for a specific word in a list of words. If the word is found, the program should print its position in the list. If it’s not found, print a message saying it’s not in the list.

// Requirements
// Use a fixed array of strings (e.g., a list of fruit names).
// Allow the user to input the word they want to search for.
// Perform a linear search on the array to find the word.
// Use a function to implement the linear search logic.
// Return -1 if the word is not found.

void displayMessage(char usrInput[]);
int linearSearch(char *fruits[], int size, char usrInput[]);

int main()
{

    char *fruits[] = {"Apple", "Banana", "Cherry", "Date", "Fig", "Grape"};
    int size = sizeof(fruits) / sizeof(fruits[0]);
    char usrInput[50];
    displayMessage(usrInput);
    int results = linearSearch(fruits, size, usrInput);
    if (results != -1)
    {
        printf("The word '%s' was found at position %d.\n", usrInput, results);
    }
    else
    {
        printf("The word '%s' was not found in the list.\n", usrInput);
    }
    return 0;
}

// step 1 make sure to display message
void displayMessage(char usrInput[])
{

    printf("Please Input what you are looking for: ");
    fgets(usrInput, 50, stdin);
    usrInput[strcspn(usrInput, "\n")] = '\0';
    printf("You entered: %s\n", usrInput);
}

// Step 2: Perform a linear search
int linearSearch(char *fruits[], int size, char usrInput[])
{
    for (int i = 0; i < size; i++)
    {
        // Compare the user's input with each fruit in the list
        if (strcmp(fruits[i], usrInput) == 0)
        {
            return i; // Return the position if found
        }
    }
    return -1; // Return -1 if not found
}