#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node_t;


int main()
{
Node_t thirdNum = {12};
Node_t secondNum = {10, &thirdNum};
Node_t head = {5, &secondNum};



// Node_t fourthNum = {13};

printf("%d\n", head.data);
printf("%d\n", head.next->data); 
printf("%d\n", head.next->next->data); 

    return 1;
}