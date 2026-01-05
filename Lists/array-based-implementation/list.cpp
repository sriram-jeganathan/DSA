#include "list.h"

List::List() {
	size = 0;
}

List::~List() {
}

void List::addNode ( int val ) {
	if ( size == 0 ) {
		arr[size++] = val;
		return;
	}
	arr[ size++ ] = val;
}

void List::printList ( ) {
	// printing the list with array based implentation
	int temp = 0;

	if ( size == 0 ) {
		cout << "List is Empty!!";
		return;
	}

	while ( temp < size ) {
		cout << arr [ temp ] << " -> ";
		temp++;
	}

	cout << "NULL"<< endl;
}
