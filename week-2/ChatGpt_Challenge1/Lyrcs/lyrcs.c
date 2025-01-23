
#include <stdio.h>
#include <string.h>

// Thoughts for this..... dont know yet but will be making it fun
// song for freestyle

char* displayMessageForUsr();
int getUsrInput();
int validateUserInput(int target, int arrayForSelections[], int sizeOfArray);
int validationLogicPrintToUser(int  validationResult);

int main()
{
    char* displaymessage = displayMessageForUsr();
    
    int arrayForSelections[] = {1, 2, 3};
    
    int sizeOfArray = sizeof(arrayForSelections) / sizeof(arrayForSelections[0]);
    
    char* arrayForSongs[] = {"DTMF"};

    int sizeOfArrayForSong = sizeof(arrayForSongs) / sizeof(arrayForSongs[0]);
    
    int target = getUsrInput();
    
    int validationResult = validateUserInput(target, arrayForSelections, sizeOfArray);
    int validateLogic = validationLogicPrintToUser(validationResult);

    
    return 0;
}



char* displayMessageForUsr()
{
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");

    printf("Please choose a song by number:\n");
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");

    printf("1: DTMF Bad Bunny \n");
    printf("\n");
}

int getUsrInput()
{
    printf("\n");
    int getNumber;
    printf("Great Selection! ");

    scanf("%d", &getNumber);
    printf("Number: %d\n", getNumber);

    return getNumber;
}

//validate user input 

int validateUserInput(int target, int arrayForSelections[], int sizeOfArray)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        if(arrayForSelections[i] == target)
        {
            return i;
        }
    }
    return -1;
}


int validationLogicPrintToUser(int  validationResult)
{
    if(validationResult != -1)
    {
        printf("Found it!\n ");
    }  
    else 
    {
        printf("Not Found\n");
    }
    return -2;
}


int pickingSong(int validDateLogic, char* arrayForSongs[], int sizeOfArrayForSong  )
{
    for(int i = 0; i < sizeOfArrayForSong; i++)
    {
        if(arrayForSongs[i] == validDateLogic)
        {
            return i;
        }
    }
    return -3;

}


void printSongName(int validateLogic, int )
{
   if( validateLogic != -3 ){
    printf("Hey nice song choice, you have chosen %d",  );
   }
}



// i am kinda lost but not really i know that a user has to choose a song right by typing in a number but that means that, that number has to be assigned to the array index?

// How can i assign a number to the index array? Do i need to even do that?

// i think yes because 1 could be 0 in the index and so on but that can get confusing real quick?

// i think no because of that issue

// So how do i do this?

//