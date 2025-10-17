#include <stdio.h>
#include <stdlib.h>

void insert ( int arr[], int *n, int pos, int x ) {
    for ( int i = *n; i > pos; i-- ) {
        arr[i] = arr[i-1];
    }
    arr[pos] = x;
    (*n)++;
}

void delete ( int arr[], int *n, int pos ) {
    for ( int i = pos; i < *n; i++ ) {
        arr[i] = arr[i+1];
    }
    (*n)--;
}

int search ( int arr[], int n, int x ) {
    for ( int i = 0; i < n; i++ ) {
        if ( arr[i] == x ) {
            return i; // return index if found
        }
    }
    return -1; // if not found
}

void sort ( int arr[], int n ) {
    for ( int i = 0; i < n - 1; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            if ( arr[j] > arr[j+1] ) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print ( int arr[] ) {
    int i = 0;
    while ( arr[i] != "\0") {
        printf ( "%d", arr[i]);
        i++;
    }
}


int main ( void ) {
    int arr[] = {5,15,25};

    // inserting elements
    printf ( "Insertion!\n" );
    // 5,15,25
    insert ( arr, 3, 1, 10 );
    print ( arr );
    //5,10,15,25
    insert ( arr, 4, 3, 20 );
    print ( arr );
    //5,10,15,20,25
    insert ( arr, 5, 5, 30 );
    print ( arr );

    // 
    return 0;
}
