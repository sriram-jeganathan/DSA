#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
}Node;

typedef struct list{
    Node *head;
}List;

List* createList( void );
void addNode ( List*, int x , int pos );
void deleteNode ( List*, int x );
void reverseList ( List* );
void reverse ( List* );
void detectLoop ( 

