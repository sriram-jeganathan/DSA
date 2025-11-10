#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
}Node;

typedef struct list{
    Node *head;
    Node *tail;
}List;

// Create a list
List* createList( void );
// Append a node at the tail
void insertTail ( List*, int );
// Append a node at the head
void insertHead ( List*, int ); 
// Append a node as a specified position
void insertMiddle ( List*, int, int );
// Print left to right
void forwardPrint ( List* );
// Print right to left
void backwardPrint ( List* );
// Recursive call function for printing in reverse
void printBackward ( Node*, Node* );
// Delete a node with a specified value
void deleteNode ( List*, int );
// Reverse a list
void reverseList ( List* );
// Recursive call function for reversing the list
void reverse ( List* );
// Detects a loop
void detectLoop ( List* );
// Searches for a node with a specified value
void searchNode ( List*, int );
// Returns the count of 
int count ( List* );
//
void freeList ( List* );
