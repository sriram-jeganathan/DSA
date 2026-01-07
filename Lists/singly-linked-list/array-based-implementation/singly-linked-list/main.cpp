#include "list.h"

int main () {
	List list;
	for ( int i = 10; i <= 100; i += 10 ) {
		list.addNode ( i );
	}
	list.printList();
	cout << endl;
	list.deleteNode ( 10 );
	list.printList();
	cout << endl;
	list.deleteNode ( 110 );
	list.printList();
	cout << endl;
	list.Size();
	
	return 0;
}
