#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Gnome
{
    char gnomeName[50];
    char hatColor[50];
    char currentLocationOfGnome[100];
    bool rebellious;
};

int main(void)
{
    struct Gnome bartholomew;
    struct Gnome gertrude; // Add Gertrude
    struct Gnome horace;   // Add Horace

    // Initialize Bartholomew
    strcpy(bartholomew.gnomeName, "Bartholomew");
    strcpy(bartholomew.hatColor, "red");
    strcpy(bartholomew.currentLocationOfGnome, "Miniature Pond");
    bartholomew.rebellious = false; // Set rebellious status directly in main

    // Initialize Gertrude (you do this part, similar to Bartholomew!)
    strcpy(gertrude.gnomeName, "Gertrude");
    strcpy(gertrude.hatColor, "blue"); // Example hat color
    strcpy(gertrude.currentLocationOfGnome, "Toadstool"); // Example location
    gertrude.rebellious = false; // Set rebellious status

    // Initialize Horace (you do this part, but make him rebellious!)
    strcpy(horace.gnomeName, "Horace");
    strcpy(horace.hatColor, "green"); // Example hat color
    strcpy(horace.currentLocationOfGnome, "Bird Feeder"); // Example location
    horace.rebellious = true; // Set Horace to rebellious!

    printf("Gnome Report:\n");

    // Print Bartholomew's info directly in main
    printf("Name: %s, Rebellious: %s\n",
           bartholomew.gnomeName, bartholomew.rebellious ? "Yes" : "No");

    // Print Gertrude's info (you do this part, similar to Bartholomew!)
    printf("Name: %s, Rebellious: %s\n",
           gertrude.gnomeName, gertrude.rebellious ? "Yes" : "No");

    // Print Horace's info (you do this part!)
    printf("Name: %s, Rebellious: %s\n",
           horace.gnomeName, horace.rebellious ? "Yes" : "No");


    return 0;
};