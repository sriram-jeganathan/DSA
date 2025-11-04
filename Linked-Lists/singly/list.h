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

List* createList( void );
void insertTail ( List*, int );
void insertHead ( List*, int ); 
void insertMiddle ( List*, int, int );
void forwardPrint ( List* );
void backwardPrint ( List* );
void printBackward ( Node*, Node* );
void deleteNode ( List*, int );
void reverseList ( List* );
void reverse ( List* );
void detectLoop ( List* );
void searchNode ( List*, int );
int count ( List* );
void freeList ( List* );
