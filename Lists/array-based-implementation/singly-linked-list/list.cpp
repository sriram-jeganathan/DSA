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

void List::deleteNode ( int val ) {
	int pos = -1;
	for ( int temp = 0; temp < size; temp++ ) {
		if ( arr[temp] == val ) {
			pos = temp;
			break;
		}
	}
	if ( pos == -1 ) {
		cout << "Node does not exist!" << endl;
		return;
	}
	arr[pos] = arr[pos+1];
	cout << "Node deleted!" << endl;
	size--;
}

int List::findNode ( int val ) {
	int pos = -1;

	for ( int i = 0; i < size; i++ ) {
		if ( arr[i] == val ) {
			pos = i;
			break;
		}
	}

	if ( pos == -1 ) {
		cout << "Node not Found !" << endl;
		return pos;
	}

	cout << "Position of Node with value " << val << " has index " << pos << endl;
	return pos;
}

int List::Size () {
	cout << "Size of list: " << size << endl;
	return size;
}
