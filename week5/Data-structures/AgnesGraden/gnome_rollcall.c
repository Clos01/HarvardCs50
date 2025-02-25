#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct  Gnome
{
    char gnomeName[50];
    char gnomeHatColor[50];
    char gnomeLocation[50];
    bool rebellious; 
};  

int main()
{
    struct Gnome agnesGnomes[4];


    //? Bartholmew
    strcpy(agnesGnomes[0].gnomeName, "Bartholomew");
    strcpy(agnesGnomes[0].gnomeHatColor, "Red");
    strcpy(agnesGnomes[0].gnomeLocation, "Square Town");
    agnesGnomes[0].rebellious = true;

    //? Gertrude 
    strcpy(agnesGnomes[1].gnomeName, "Gerturde");
    strcpy(agnesGnomes[1].gnomeHatColor, "Blue");
    strcpy(agnesGnomes[1].gnomeLocation, "Square Town");
    agnesGnomes[1].rebellious = false;

    //? Horace 
    strcpy(agnesGnomes[2].gnomeName, "Horace");
    strcpy(agnesGnomes[2].gnomeHatColor, "Green");
    strcpy(agnesGnomes[2].gnomeLocation, "Square Town");
    agnesGnomes[2].rebellious = false;

    //? Beatrice 
    strcpy(agnesGnomes[3].gnomeName, "Beatrice");
    strcpy(agnesGnomes[3].gnomeHatColor, "Yellow");
    strcpy(agnesGnomes[3].gnomeLocation, "Square Town");
    agnesGnomes[3].rebellious = false;

      // 3. Mark Horace and Beatrice as rebellious (after initializing the array)
    agnesGnomes[2].rebellious = true; // Horace is at index 2 (0, 1, 2...)
    agnesGnomes[3].rebellious = true; // Beatrice is at index 3

    for(int i = 0; i < 5; i++ )
    {
        printf("Gnome Name: %s\n, Rebellious %s\n", agnesGnomes[i].gnomeName, agnesGnomes[i].rebellious ? "True" : "False");
    }
    return 0;
}