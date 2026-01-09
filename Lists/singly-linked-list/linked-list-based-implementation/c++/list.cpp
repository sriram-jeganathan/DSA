#include "list.h"

void List::insert ( int x ) {
  Node *newNode = new Node ( x );

  if ( head == NULL ) {
    head = newNode;
    return;
  }
  
  Node *current = head;
  while ( NULL != current->next ) {
    current = current->next;
  }

  current->next = newNode;
}


int List::countSize ( void ) {
  Node *current = head;

  int Size = 0;
  while ( current != NULL ) {
    Size++;
    current = current->next;
  }
  return Size;
}

void List::insertAtMiddle( int val, int position ) {
    if ( position < 1 ) {
        cout << "Insertion failed." << endl;
        return;
    }

    Node *newNode = new Node ( val );


    if ( position == 1 ) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *current = head;
    int count = 1;

    while ( count < position - 1 && current ) {
        current = current->next;
        count++;
    }

    if ( !current ) {
        cout << "Insertion failed." << endl;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;

    cout << val << " inserted at position " << position << "." << endl;
}

void List::insertAtHead ( int val ) {
  Node *newNode = new Node ( val );

  if ( head == NULL ) {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void List::printList ( void ) {
  Node *current = head;

  while ( current != NULL ) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "NULL" << endl;
}

void List::deleteNode ( int val ) {
  Node *current = head;
  Node *prev;

  if ( head == NULL ) {
    cout << "List is Empty" << endl;
    return;
  }
  while ( current->data != val ) {
    if ( current->next->data == val ) {
      prev = current;
    }
    current = current->next;
  }

  prev->next = current->next;
  delete current;
}

void List::findNode ( int x ) {
  Node *current = head;
  int pos = 0;
  int check = -1;

  while ( current != NULL ) {
    if ( current->data == x ) {
      check = 0;
      cout << "Node found at " << pos << endl;
      return;
    }
    pos++;
    current = current->next;
  }

  if ( check == -1 ) {
    cout << "Node not Found" << endl;
    return;
  }
}
