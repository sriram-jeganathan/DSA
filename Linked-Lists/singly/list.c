#include "list.c"

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

    Node *temp = current->next;
    current->next = newNode;
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

void deleteNode ( List *list, int x ) {
    Node *current = list->head;

    while ( NULL != current ) {
        if ( current->next->val == x ) {
            Node *prev = current;
            break;
        }
        current = current->next;
    }
    
    prev->next = current->next;
    free ( current );
    
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

void searchNode ( List *list, x ) {
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
