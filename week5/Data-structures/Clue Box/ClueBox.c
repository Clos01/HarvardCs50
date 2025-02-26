#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct ClueBox 
{
    int data;
    struct ClueBox *addressOfNextNode;
};



int main ()
{
    // first struct 
    struct ClueBox *ClueBox = (struct ClueBox*)malloc(sizeof(struct ClueBox));
    if(ClueBox == NULL)
    {
        free(ClueBox);
        return 1;
    }
    ClueBox->data = 2;
    ClueBox->addressOfNextNode = NULL;

     printf("%d\n", ClueBox->data);
    printf("%p\n", ClueBox->addressOfNextNode);

    //create the second node (Cluebox 2 )
    struct ClueBox *cluebox2 = (struct ClueBox*)malloc(sizeof(struct ClueBox));
    if(cluebox2 == NULL)
    {
        free(cluebox2);
        return 1;
    
    }
    cluebox2->data = 4;
    cluebox2->addressOfNextNode = NULL;


    ClueBox -> addressOfNextNode = cluebox2;
       printf("\nClue Box 2:\n");
    printf("Data: %d\n", cluebox2->data);
    printf("Address of Next Node: %p\n", cluebox2->addressOfNextNode);

    printf("\nClue Box 1 (after linking):\n");
     printf("Data: %d\n", ClueBox->data);
    printf("Address of Next Node: %p\n", ClueBox->addressOfNextNode);
    printf("value of next node %d\n", ClueBox->addressOfNextNode->data);

    return 0;
}
