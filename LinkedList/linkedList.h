#include "Node.h"

template <typename T>
class LinkedList
{

    private:
    Node<T> *Head;
    
    public:
    LinkedList()
    {
        Head = new Node<T>;
    }
    void insertAtEnd( T value )
    {
        Node<T> *newNode = new Node<T>( value );
        if( !Head )
        {
            Head = newNode;
        }
        else
        {
            Node<T> *temp = Head;
            while(temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
    }
    void insertAtBegining( T value )
    {
        Node<T> *newNode = new Node<T>( value );
        newNode -> next = Head -> next;
        Head -> next = newNode;
    }
    void insertAtPos( int pos, int value )
    {
        int count = 1;
        if( pos < 0 )
            insertAtBegining( value );
        else
        {
            Node<T> *temp = Head;
            Node<T> *newNode = new Node<T>( value );

            while( count < pos && temp -> next != NULL )
            {
                temp = temp -> next;
                count++;
            }
            cout <<  "COUNT IS " << count << "\n";
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }
    void print()
    {
        if( Head != NULL )
        {
            Node<T> *temp = Head;
            cout << "{";
            while ( temp -> next != NULL )
            {
                temp = temp -> next;
                cout << " " << temp -> data << " ->";
            }
            cout << "\b\b} \n";
        }
    }

};