#include <stdio.h>

//Global variables
int steps[7];
int totalSteps = 0;
int averageSteps;

void printHash();
int stepsWalkedWeekday();
void printTotalSteps_And_AvgSteps();

int main() {
    stepsWalkedWeekday();
    printTotalSteps_And_AvgSteps();
    
    return 0;
}

void printTopHash()
{
    printf("\n*********************\n");
    printf(" \n \n");

}

void printBottomHash()
{
    printf("\n*********************\n");
    printf(" \n \n");

}
int stepsWalkedWeekday() {
    for (int i = 0; i < 7; i++) {
        printf("\nEnter Steps for day %d: ", i + 1);
        scanf("%d", &steps[i]);
        totalSteps += steps[i];
    }
    averageSteps = totalSteps / 7; // Correct calculation
    return 0;
}

void printTotalSteps_And_AvgSteps()
{
    printTopHash();
    printf("Total Steps for the week: %d \n", totalSteps);
    printBottomHash();
    printTopHash(); // Reuse the printHash function
    
    printf("Average Steps: %d\n", averageSteps);
    printBottomHash();

}