#include "list.h"

int main () {
	List list;
	for ( int i = 10; i < 110; i += 10 ) {
		list.addNode ( i );
	}
	list.printList();
	return 0;
}
