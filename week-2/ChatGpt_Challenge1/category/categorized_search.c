#include <stdio.h>
#include <string.h>

char* displayMessage(char usrInput[]);
char* displayMessageLogic(char usrInput[]);
int main()
{
char displayingMessage[100];
displayMessage( displayingMessage );
displayMessageLogic (displayingMessage);


return 0;
}

char* displayMessage(char usrInput[])
{
     printf("\n");
    printf("What are you searching for: \n");
     printf("\n");
    scanf("%s", usrInput);

}


//check logic for displayMessage

char* displayMessageLogic(char usrInput)
{
 printf("You entered: %s\n", usrInput);  
 scanf("%s". usrInput);
}