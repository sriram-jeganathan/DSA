#include "list.h"

Node* createList ( void ) {
  Node *head = malloc ( sizeof ( Node ) );
  head->next = NULL;

  return head;
}

void append ( int val ) {
  Node *newNode = malloc ( sizeof ( Node ) );
  newNode->data = val;
  newNode->next = NULL;

  if ( head == NULL ) {
    head = newNode;
    tail = newNode;
    return;
  } 

  tail->next = newNode;
  tail = newNode;
}

void prepend ( int val ) {
  Node *newNode = malloc ( sizeof ( Node ) );
  newNode->data = val;
  newNode->next = NULL;

  if ( head == NULL ) {
    head = newNode;
    tail = newNode;
    return
  }

  newNode->next = head;
  head = newNode;
}

void printList ( void ) {
  Node *current = malloc ( sizeof ( Node ) );

  while ( !current ) {
    cout << current->data << " -> ";
    current = current->next;
  }
}

void deleteNode ( int ) {

}
