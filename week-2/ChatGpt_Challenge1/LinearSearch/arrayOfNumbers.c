#include <stdio.h>
#include <string.h>

int numbersArray();
int targetNumberInArray(int target);
int linearSearch(int target, int numbers[], int sizeOfNumber);

// TODO
//  Setup Array numbers -> 4, 7, 1, 9, 2, 5

int main()
{

    int numbers[] = {4, 7, 1, 9, 2, 5};
    int sizeOfNumber = sizeof(numbers) / (numbers[0]);
    int result = linearSearch(5, numbers, sizeOfNumber);
    if (result != -1)
    {
        printf("Target number found at index %d\n", result);
    }
    else
    {
        printf("Target number not found\n");
    }
}

int targetNumberInArray(int target)
{
    int targetValue;
    return targetValue;
}

int linearSearch(int target, int numbers[], int sizeOfNumber)
{

    for (int i = 0; i < sizeOfNumber; i++)
    {
        if (numbers[i] == target)
        {
            return i;
        }
    }
    return -1;
}