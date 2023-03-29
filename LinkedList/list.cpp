#include "circularLinkedList.h"
// #include "linkedList.h"
// #include "doublyLinkedList.h"

int main()
{
    int num = 5;
    LinkedList<int> li;
    for( int i = num; i > 0; i-- )
    {
        li.insertAtBegining( i );
    }
    for( int i = num + 1; i <= num * 2; i++ )
    {
        li.insertAtEnd( i );
    }
    // for( int j = 1; j <= 10; j++ )
    // {
    //     li.insertAtEnd( 7 );
    // }
    
    li.insertAtPos( -100, -1 );
    li.insertAtPos( 100, 100 );
    li.insertAtPos( 2, 47 );
    // li.deleteAtBegining();
    // li.deleteAtEnd();
    // li.deleteAtPos( 2 );
    // li.deleteATValue( 7 );
    li.print();
    return 0;
}
