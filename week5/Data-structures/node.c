#include <stdio.h>
#include <stdlib.h>

//Defining the node structure
typedef struct car {
    int year;
    struct car* next;
} Car;

int main()
{
Car *Chevy = malloc(sizeof(Car));
if(Chevy == NULL)
{
    return 1;
}
Chevy->year = 1970;
Chevy->next = NULL;

Car *Toyota = malloc(sizeof(Car));
if(Toyota ==NULL){
    free(Chevy);
    return 1;
}
Toyota->year = 1980;
  Toyota->next = NULL;

Chevy->next = Toyota;

    // Print the data in the nodes
    printf("First node data Chevy Year: %d\n", Chevy->year);
    printf("Second node data Toyota Year: %d\n", Toyota->year);
    // Alternatively, using Chevy->next
    // printf("Second node data Toyota Year: %d\n", Chevy->next->year);

    free(Toyota);
 free(Chevy);
 return 0;


}