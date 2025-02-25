#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct  Gnome
{
    char gnomeName[50];
    char gnomeHatColor[50];
    char gnomeLocation[50];
    bool gnomeRebel; 
};  

int main()
{
    char *gnomes[5] = {"Bartholomew", "Gerturde", "Horace", "Beatrice", "Cecil"};
    
    struct Gnome Bartholomew; 
    struct Gnome Gerturde;
    struct Gnome Horace;
    struct Gnome Beatrice;
    struct  Gnome Cecil;

    //? Bartholmew
    strcpy(Bartholomew.gnomeName, "Bartholomew");
    strcpy(Bartholomew.gnomeHatColor, "Red");
    strcpy(Bartholomew.gnomeLocation, "Square Town");
    Bartholomew.gnomeRebel = false;

    //? Gertrude 
    strcpy(Gerturde.gnomeName, "Gerturde");
    strcpy(Gerturde.gnomeHatColor, "Blue");
    strcpy(Gerturde.gnomeLocation, "Square Town");
    Gerturde.gnomeRebel = false;

    //? Horace 
    strcpy(Horace.gnomeName, "Horace");
    strcpy(Horace.gnomeHatColor, "Green");
    strcpy(Horace.gnomeLocation, "Square Town");
    Horace.gnomeRebel = false;

    //? Beatrice 
    strcpy(Beatrice.gnomeName, "Beatrice");
    strcpy(Beatrice.gnomeHatColor, "Yellow");
    strcpy(Beatrice.gnomeLocation, "Square Town");
    Beatrice.gnomeRebel = false;

    
}