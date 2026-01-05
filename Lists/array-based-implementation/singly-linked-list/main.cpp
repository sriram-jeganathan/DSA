#include "list.h"

int main () {
	List list;
	for ( int i = 10; i <= 110; i += 10 ) {
		list.addNode ( i );
	}
	list.printList();
	list.deleteNode ( 110 );
	list.printList();
	list.findNode ( 70 );
	list.findNode ( 65 );
	list.Size();
	
	return 0;
}
