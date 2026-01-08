#include "list.h"
using namespace std;

void List::insert ( int val ) {
  Node *newNode = new Node ( val );

  if ( head == NULL ) {
    head = newNode;
    return;
  }

  Node *current = head;

  while ( current != NULL ) {
    current = current->next;
  }

  current->next = newNode;
  newNode->prev = current;
}

int List::countSize ( void ) {
  Node *current = head;
  int Size = 0;

  while ( !current ) {
    Size++;
    current = current->next;
  }
  return Size;
}


void List::insertAtMiddle ( int pos, int val ) {
  Node *newNode = new Node ( val );

  int Size = List::countSize();
  Node *current = head;
  Node *pre;
  for ( int i = 0; i < Size; i++ ) {
    if ( current == NULL ) {
      cout << "Node not Found" << endl;
      return;
    }
    if ( i < pos ) {
      pre = current;
    }
    current = current->next;
  }
you changed the sht
  newNode->next = current;
  newNode->prev = pre;
  pre->next = newNode;
  current->prev = newNode;
}

/*
    void insertBefore ( int, int );
    void insertAfter ( int, int );
*/

void List::insertAtHead ( int val ) {
  Node *newNode = new Node ( val );

  if ( head == NULL ) {
    head = newNode;
  }

  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

void List::printList ( void ) {
  Node *current = head;

  if ( head == NULL ) {
    cout << "List is Empty" << endl;
    return;
  }

  while ( !current ) {
    cout << current->data << " -> ";
  }
  cout << "NULL" << endl;
}
