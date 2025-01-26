
#include <stdio.h>

#include <string.h>

#include "DTMFLyrcs.c"
#include "TitMePreguntoLyrics.c"
// Thoughts for this..... dont know yet but will be making it fun
// song for freestyle

void displayMessageForUsr();

int getUsrInput();

int validateUserInput(int target, int arrayForSelections[], int sizeOfArray);

int validationReturn(int validationResult);

void printingLyrics(int valiDateLogic);
void displaySongWithLyrics(int valiDateLogic);

int main()
{
    // Will Display message to terminal
    displayMessageForUsr();

    // will be put in the terminal for displaying the song number.
    // Next line will be taking the array size and making sure that it gets divided by the length of it and how much a byte it will be based on the value of the element (INT) could be 4 bytes 4*3 = 12 then 12 / 4 = 3. Means 3 elements in the array
    int arrayForSelections[] = {1, 2, 3};
    int sizeOfArray = sizeof(arrayForSelections) / sizeof(arrayForSelections[0]);

    // Determining the name of the Song
    // Second line does the same thing, Verifying elements in the array
    char *arrayForSongs[] = {"DTMF", "Titi Me Pregunto"};
    int sizeOfArrayForSong = sizeof(arrayForSongs) / sizeof(arrayForSongs[0]);


    // Getting the number from the user. Takes that function from the user and is able to be assigned to a variable called 'target'
    int target = getUsrInput();

    // Function to iterate through the 'arrayForSelections' and check it along side the target
    int validationResult = validateUserInput(target, arrayForSelections, sizeOfArray);

    // Collection of ValidationResult to display conformation
    int valiDateLogic = validationReturn(validationResult);

    displaySongWithLyrics(valiDateLogic);

    return 0;
}

void displayMessageForUsr()
{
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");

    printf("Please choose a song by number:\n");
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");

    printf("1: Song 1 - DTMF By Bad Bunny\n");
    printf("2: Song 2 - Titi Me Pregunto By Bad Bunny\n");

    printf("\n");
}

int getUsrInput()
{
    printf("\n");
    int getNumber;
    scanf("%d", &getNumber);
    printf("Great Selection! ");

    printf("Number: %d\n", getNumber);

    return getNumber;
}

// validate user input

int validateUserInput(int target, int arrayForSelections[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arrayForSelections[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int validationReturn(int validationResult)
{
    if (validationResult != -1)
    {
        printf("Found it!\n ");
        return validationResult;
    }
    else
    {
        printf("Not Found\n");
    }
    return -2;
}

void printingLyrics(int valiDateLogic)
{
    if (valiDateLogic != 1)
    {
        displaySongWithLyrics(valiDateLogic);
    }else {
        printf("Invalid choice. Please restart the program and choose a valid book.\n");
    }
}

void displaySongWithLyrics(int valiDateLogic)
{
    switch (valiDateLogic)
    {
    case 0:
        printf("%s\n", dtmfLyrics);
        break;
    case 1:
printf("%s\n", titiMePreguntoLyrics);
    break;
    default:
        break;
    }
}
