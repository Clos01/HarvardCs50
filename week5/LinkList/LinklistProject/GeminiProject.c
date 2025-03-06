#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
int data; 
struct Node *next;
} Node;

Node* createNode(int data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode== NULL)
    {
        free(newNode);
        printf("Memory allocation failed");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

    // Inserting a pointer for linklist 
    Node  *insertAtBeginning( Node *head, int data)
    {
        Node *newNode = createNode(data);
        if(newNode == NULL){
            free(newNode);
            printf("Memory Allocation Failed ");
            return NULL;
        }
        newNode -> next = head; 
        return newNode;


    }


    void printList(Node *head)
    {
        Node *current = head;
        while (current != NULL)
        {
            printf("%d\n", current ->data);
            current = current->next; 
        }
        printf("NULL");
    }

    void freeList(Node *head)
    {
        Node *current = head;
        while(current != NULL)
        {
            Node *nextNode = current ->next;
            free(current);
            current = nextNode; 
        }
        head = NULL;
    }


int main()
{
    system("clear");

    Node *head = NULL;
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20); // Insert 20 at the beginning
    head = insertAtBeginning(head, 30); // Insert 30 at the beginning
    printList(head);
    freeList(head);

    return 0;
}
