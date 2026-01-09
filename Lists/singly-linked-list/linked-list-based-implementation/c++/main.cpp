#include "list.h"

int main ( void ) {
  List list;
  for ( int i = 10; i < 110; i += 10 ) {
    list.insert( i );
  }

  list.insertAtMiddle ( 45, 4 );
  list.printList();
  list.insertAtHead ( 0 );
  list.printList();
  list.deleteNode ( 45 );
  list.printList();
  list.findNode ( 40 );
  return 0;
}
