#include <stdio.h>
#include <stdlib.h>

struct typedef node{
    int val;
    struct node *next;
    struct node *prev;
}Node;

struct typedef list{
    Node *head;
    Node *tail;
}List;

// Create a new list
List* createList ( void );

// Create a new node
Node* createNode ( int );

// sets the head and tail at newNode if head is NULL
void ifempty ( List*, Node* );

// returns the size of the list
int count ( List* );

// inserts the newNode at the tail
void insertTail ( List*, int );

// inserts the newNode at the head
void insertHead ( List*, int );

// inserts the newNode at the specified position
void insertMiddle ( List*, int, int );

// prints the list in the same order
void forwardPrint ( List* );

// prints the list in the reverse order
void backwardPrint ( List* );

// reverses the list
void reverseList ( List* );

// frees the used memory
void free ( List* );
