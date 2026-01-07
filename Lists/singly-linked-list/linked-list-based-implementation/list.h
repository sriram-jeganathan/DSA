#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node ( int val ) {
      data = val;
      next = nullptr;
    }
};

class List {
  private:
    Node *head;
  public:
    List() {
      head = nullptr;
    }

    void insert ( int );
    void insertAtStart ( int );
    int countSize ( void );
    void insertAtMiddle ( int , int );
    void insertAtHead ( int );
    void printList ( void );
    void deleteNode ( int );
    void findNode ( int );
};
