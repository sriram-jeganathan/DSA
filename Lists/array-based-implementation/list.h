// Array Based Implementation of Singly Linked Lists

#include <iostream>
using namespace std;

const int maxSize = 100;

class List {
	private:
		int arr [ maxSize ];
		int size;
	public:
		List();
		~List();
		void addNode ( int );
		void printList ( );
		void deleteNode ( int );
		void findNode ( int );
		void Size ( );
};
