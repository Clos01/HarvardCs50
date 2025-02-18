#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;           // The actual data
    struct node* next;  // Pointer to the next node
} Node_t;