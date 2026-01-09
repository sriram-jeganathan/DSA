#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
}Node;

typedef struct list {
  Node *head;
  Node *tail;
}

List createList ( void );
void append ( int );
void prepend ( int );
void printList ( void );
void deleteNode ( int );
void deleteNodeWithPosition ( int );
void findNode ( int );
void freeList ( void );
