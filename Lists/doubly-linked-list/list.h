#include <iostream>

class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node ( int val ) {
      data = val;
      next = nullptr;
      prev = nullptr;
    }
}

class List {
  private:
    Node *head;
  public:
    List() {
      head = nullptr;
    }

    void insert ( int );
    int countSize ( void );
    void insertAtMiddle ( int, int );
    void insertBefore ( int, int );
    void insertAfter ( int, int );
    void insertAtHead ( int );
    void printList ( void );
    void deleteNode ( int );
    void searchNode ( int );
}
