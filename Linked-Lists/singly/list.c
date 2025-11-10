#include "list.h"

List* createList ( void ) {
    List* list = malloc ( sizeof ( List ) );
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void insertTail ( List *list, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->val = x;
    newNode->next = NULL;

    if ( list->head == NULL ) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }

    list->tail->next = newNode;
    list->tail = newNode;
    return;
}

void insertHead ( List *list, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->val = x;
    newNode->next = NULL;

    if ( list->head == NULL ) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }

    newNode->next = list->head;
    list->head = newNode;
    return;
}

void insertMiddle ( List *list, int x, int pos ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->val = x;
    newNode->next = NULL;
    int size = count ( list );
    Node *curr = list->head;
    Node *prev;

    int current = 0;

    if ( pos == 0 ) {
        newNode->next = list->head;
        list->head = newNode;
        return;
    }

    if ( pos == size - 1 ) {
        list->tail->next = newNode;
        list->tail = newNode;
        return;
    }

    while ( current - 1 <= pos ) {

        if ( curr->next->val = x ) {
            prev = curr;
            break;
        }

        current++;
    }

    Node *temp = curr->next;
    curr->next = newNode;
    newNode->next = temp;
    return;
}

void forwardPrint ( List *list ) {
    Node *current = list->head;
    while ( current != NULL ) {
        printf ( "%d --> ", current->val );
        current = current->next;
    }
    printf ( "NULL\n" );
    return;
}

void printBackward ( Node *current, Node *previous ) {
    if ( NULL == current ) {
        return;
    }
    printBackward ( current->next, current );
    printf ( "%d\t", current->data );
}

void backwardPrint ( List *list ) {
    printBackward ( list->head, NULL );
    printf ( "NULL\n" );
    return;
}

void deleteNode ( List *list, int x ) {
    Node *current = list->head;
    Node *prev;

    while ( NULL != current ) {
        if ( current->next->val == x ) {
            Node *prev = current;
            break;
        }
        current = current->next;
    }
    
    prev->next = current->next;
    
}

void reverse ( Node *current, Node *previous ) {
    if ( current == NULL ) {
        return;
    }
    reverse ( current->next, current );
    current->next = current;
}

void reverseList ( List *list ) {
    Node *current = list->head;
    reverse ( current, NULL );
    return;
}

void detectLoop ( List *list ) {

}

int count ( List *list ) {
    Node *current = list->head;
    int count = 0;

    while ( current != NULL ) {
        count++;
        current = current->next;
    }
    return count;
}

void searchNode ( List *list, int x ) {
    Node *current = list->head;

    while ( current != NULL ) {
        if ( current->val == x ) {
            printf ( "Node Exists!\n" );
            return;
        }
        current = current->next;
    }
    printf ( "Node doesn't exist!\n" );
    return;
}

void freeList ( List *list ) {
    Node *current = list->head;
    Node *temp;

    while (current != NULL) {
        temp = current;
        current = current->next; 
        free(temp);
    }

    free(list);
}

/*
void backwardPrint ( List* );
void printBackward ( Node*, Node* );
void reverseList ( List* );
void reverse ( List* );
void detectLoop ( List* );
 */
