#include "linkedList.h"
// #include <cstdlib>
// #include <time.h>
// srand(time(0));
// int pos = 1 + ( rand() % totalSize );

int main()
{
    int totalSize = 5;
    LinkedList<int> li;
    
    for( int i = totalSize; i > 0; i-- )
    {
        li.insertAtBegining( i );
    }
    for( int i = totalSize + 1; i <= totalSize * 2; i++ )
    {
        li.insertAtEnd( i );
    }

    // li.insertAtEnd( 50 );
    li.insertAtPos( -1, 0 );
    li.insertAtPos( 6, -1 );
    li.insertAtPos( 19, 100 );


    li.print();

}