#include "list.h"

int main ( void ) {
    // Creating two linked lists
    printf ( "SINGLY LINKED LIST OPERATIONS!\n\n" );
    printf ( "2 Lists Created!\n" );
    List *list1 = createList ();
    List *list2 = createList ();

    // adding elements to the lists
    printf ( "Appending nodes to lists!\n" );
    for ( int i = 10; i < 70; i += 10 ) {
        insertTail ( list1, i );
    }
    for ( int i = 60; i < 120; i += 10 ) {
        insertTail ( list2, i );
    }

    // Forward printing the two lists
    printf ( "Forward Printing\n" );
    printf ( "List 1:\t" );
    forwardPrint ( list1 );
    printf ( "List 2:\t" );
    forwardPrint ( list2 );
/*
    // Backward printing the two lists
    printf ( "Backward Printing\n" );
    printf ( "List 1:\t" );
    backwardPrint ( list1 );
    printf ( "List 2:\t" );
    backwardPrint ( list2 );
*/
    // Deleting a node from each list
    printf ( "Node Deletion\n" );

    printf ( "List 1: \n" );
    printf ( "Before:\t" );
    forwardPrint ( list1 );
    deleteNode ( list1, 70 );
    printf ( "After:\t" );
    forwardPrint ( list1 );
    
    printf ( "List 2: \n" );
    printf ( "Before:\t" );
    forwardPrint ( list2 );
    deleteNode ( list2, 110 );
    forwardPrint ( list2 );
    printf ( "After:\t" );

    // Reversing the lists
    //reverseList ( list1 );
    //forwardPrint ( list1 );
    //reverseList ( list2 );
    //forwardPrint ( list2 );


    freeList ( list1 );
    freeList ( list2 );
    return 0;
}
