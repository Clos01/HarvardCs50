#include <stdio.h>
#include <string.h>

// Function declarations
void displayMessage(char usrInput[]);
char* displayMessageLogic(char usrInput[]);
int main()
{
    //declaring an array to store user input 
char displayingMessage[100];
//Call functions
displayMessage( displayingMessage );
displayMessageLogic (displayingMessage);


return 0;
}
void displayMessage(char usrInput[]) {
    printf("\n");
    printf("What are you searching for: \n");
    printf("\n");
    scanf("%s", usrInput); // Read input from the user
}



//check logic for displayMessage

char* displayMessageLogic(char usrInput[])
{
 printf("You entered: %s\n", usrInput);  
}