#include "list.h"

List* createList ( ) {
    List *list = malloc ( sizeof ( List ) );
    list->head = NULL;
    list->tail = NULL;
    return list;
}

Node *createNode ( int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->val = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void ifempty ( List *list, Node *newNode ) {
    if ( list->head == NULL ) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }
}

int count ( List *list ) {
    int listSize = 0;
    Node *current = list->head;

    while ( current != NULL ) {
        listSize++;
        current = current->next;
    }

    return count;
}

void insertTail ( List *list, int x ) {
    Node *newNode = createNode ( x );

    ifempty ( list, newNode );

    list->tail->next = newNode;
    newNode->prev = list->tail;
    list->tail = newNode;

    return;
}

void insertHead ( List *list, int x ) {
    Node *newNode  = createNode ( x );

    ifempty ( list, newNode );

    newNode->next = list->head;
    list->head->prev = newNode;
    list->head = newNode;

    return;
}

void insertMiddle ( List *list, int x, int pos ) {
    Node *newNode = createNode ( x );
    int listSize = count ( list );

    ifempty ( list, newNode );

    for ( int i = 0; i < listSize; i++ ) {
        if ( i == pos ) {
            
            break;
        }
    }


}
