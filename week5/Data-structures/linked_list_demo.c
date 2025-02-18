#include <stdio.h>
#include <stdlib.h>

// Define our box (node) structure
typedef struct node {
    int number;         // The value we want to store
    struct node *next;  // Pointer to the next box
} node_t;

// Function to create a new node (box)
node_t *create_node(int value) {
    node_t *new_node = malloc(sizeof(node_t));
    if (new_node == NULL) {
        printf("Error: Out of memory!\n");
        return NULL;
    }
    new_node->number = value;
    new_node->next = NULL;
    return new_node;
}

// Function to print the list with visual representation
void print_list_visual(node_t *head) {
    node_t *current = head;
    while (current != NULL) {
        printf("[%d]->", current->number);
        current = current->next;
    }
    printf("NULL\n");
}

int main(void) {
    // Let's create a simple list: 5->3->8->2
    
    // Create the first node (head)
    node_t *head = create_node(5);
    printf("Created first node: ");
    print_list_visual(head);
    
    // Add second node
    head->next = create_node(3);
    printf("Added second node: ");
    print_list_visual(head);
    
    // Add third node
    head->next->next = create_node(8);
    printf("Added third node:  ");
    print_list_visual(head);
    
    // Add fourth node
    head->next->next->next = create_node(2);
    printf("Added fourth node: ");
    print_list_visual(head);

    // Clean up (free memory)
    node_t *current = head;
    node_t *next_node;
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    return 0;
}
