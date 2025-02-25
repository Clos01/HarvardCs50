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
    struct Gnome Bartholomew; 
    struct Gnome Gerturde;
    struct Gnome Horace;
    struct Gnome Beatrice;
    struct  Gnome Cecil;
    char *gnomes[5] = {"Bartholomew", "Gerturde", "Horace", "Beatrice", "Cecil"};
    
}