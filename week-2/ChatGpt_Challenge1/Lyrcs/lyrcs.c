#include <stdio.h>  
#include <string.h> 

// Including external C files that contain the song lyrics.
// These files likely define `dtmfLyrics` and `titiMePreguntoLyrics`.
#include "DTMFLyrcs.c"
#include "TitMePreguntoLyrics.c"



void displaySongOptions();

int getUserSongChoice();

int validateSongChoice(int selectedSongNumber, int songNumbers[], int songNumbersCount);

int processValidationResult(int validatedIndex);

void displayLyricsIfValid(int validatedSongIndex);
void showLyricsForSong(int validatedSongIndex);

int main()
{
    // Will Display message to terminal
    displaySongOptions();

    // will be put in the terminal for displaying the song number.
    // Next line will be taking the array size and making sure that it gets divided by the length of it and how much a byte it will be based on the value of the element (INT) could be 4 bytes 4*3 = 12 then 12 / 4 = 3. Means 3 elements in the array
    int songNumbers[] = {1, 2, 3};
    int songNumbersCount = sizeof(songNumbers) / sizeof(songNumbers[0]);

    // Determining the name of the Song
   
    char* songTitles[] = {"DTMF", "Titi Me Pregunto"};
    int songNumbersCountForSong = sizeof(songTitles) / sizeof(songTitles[0]);


    // Getting the number from the user. Takes that function from the user and is able to be assigned to a variable called 'selectedSongNumber'
    int selectedSongNumber = getUserSongChoice();

    // Function to iterate through the 'songNumbers' and check it along side the selectedSongNumber
    int validatedIndex = validateSongChoice(selectedSongNumber, songNumbers, songNumbersCount);

    // Collection of validatedIndex to display conformation
    int validatedSongIndex = processValidationResult(validatedIndex);

    showLyricsForSong(validatedSongIndex);

    return 0;

}
void displaySongOptions()
{
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");

    printf("Please choose a song by number:\n");
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");

    printf("\n1: Song 1 - DTMF By Bad Bunny\n");
    printf("\n2: Song 2 - Titi Me Pregunto By Bad Bunny\n");

    printf("\n");
}

int getUserSongChoice()
{
    printf("\n");
    int getNumber;
    scanf("%d", &getNumber);
    printf("\n Great Selection! \n");

    printf("Number: %d\n", getNumber);

    return getNumber;
}

// validate user input

// Function to validate the user's song selection by checking if it exists in the song list.
int validateSongChoice(int selectedSongNumber, int songNumbers[], int songNumbersCount)
{
    // Iterate through the array of available song numbers
    for (int i = 0; i < songNumbersCount; i++)
    {
        // Check if the selected song number matches an available song number
        if (songNumbers[i] == selectedSongNumber)
        {
            return i; // Return the index of the found song
        }
    }

    return -1; // Return -1 if the song number is not found in the list
}

// Function to process the validation result and return the validated song index.
int processValidationResult(int validatedIndex)
{
    // Check if the validated index is a valid value (not -1).
    if (validatedIndex != -1)
    {
        printf("\nFound it!\n ");  // Notify the user that the song was found.
        return validatedIndex;  // Return the valid index.
    }
    else
    {
        printf("\nNot Found\n");  // Notify the user that the song was not found.
    }

    return -2;  // Return -2 to indicate an invalid selection.
}

void displayLyricsIfValid(int validatedSongIndex)
{
    if (validatedSongIndex != 1)
    {
        showLyricsForSong(validatedSongIndex);
    }else {
        printf("Invalid choice. Please restart the program and choose a valid book.\n");
    }
}

// Function to display lyrics for the selected song based on the validated index.
void showLyricsForSong(int validatedSongIndex)
{
    switch (validatedSongIndex)  // Switch case to determine which song to display
    {
    case 0:  // If the validated index is 0, print the lyrics for "DTMF"
        printf("%s\n", dtmfLyrics);
        break;  // Break to exit the switch statement after executing this case

    case 1:  // If the validated index is 1, print the lyrics for "Titi Me Pregunto"
        printf("%s\n", titiMePreguntoLyrics);
        break;  // Break to prevent execution of the default case

    default:  // If the validated index doesn't match any known song, do nothing
        break;  // This ensures no action is taken for an invalid song index
    }
}