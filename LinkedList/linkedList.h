#include "Node.h"

template <typename T>
class LinkedList
{
    Node<T> *Head;
    public:

    LinkedList()
    {
        Head = NULL;
    }
    // INSERTION
    void insertAtBegining( int value )
    {
        Node<T> *newNode = new Node<T>( value );
        if( !Head )
        {
            Head = newNode;
        }
        else
        {
            newNode -> next = Head;
            Head = newNode;
        }
    }

    void insertAtEnd( int value )
    {
        Node<T> *newNode = new Node<T>( value );
        if( !Head )
        {
            Head = newNode;
        }
        else
        {
            Node<T> *temp = Head;
            while( temp -> next != NULL )
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
    }

    void insertAtPos( int pos, int value )
    {
        if( !Head || pos < 1 )
        {
            insertAtBegining( value );
        }
        else
        {
            Node<T> *newNode = new Node<T>( value );
            Node<T> *temp = Head;
            int count = 1;
            while( count < ( pos - 1 ) && temp -> next != NULL )
            {
                temp = temp -> next;
                count++;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }

    // Delete
    void deleteAtBegining()
    {
        if( Head )
        {
            Node<T> *temp = Head;
            delete temp;
            Head = Head -> next;
        }
    }
    void deleteAtEnd()
    {
        if( Head )
        {
            Node<T> *temp = Head;
            while ( temp -> next -> next != NULL )
            {
                temp = temp -> next;
            }
            Node<T> *temp2 = temp -> next;
            temp -> next = NULL;
            delete temp2;
        }
    }
    void deleteAtPos( int pos )
    {
        if ( pos < 1 || !Head )
        {
            deleteAtBegining();
        }
        else
        {
            Node<T> *temp = Head;
            int count = 1;
            while( count < ( pos - 1 ) && temp -> next != NULL )
            {
                temp = temp -> next;
                count++;
            }
            Node<T> *temp2 = temp -> next;
            temp -> next = temp -> next -> next;
            delete temp2;
        }
    }
    void deleteATValue( int value )
    {
        if( !Head )
        {
            return;
        }
        else
        {
            Node<T> *temp = Head;
            while( temp -> next -> next != NULL )
            {
                if( temp -> next -> data == value )
                {
                    Node<T> *temp2 = temp -> next;
                    temp = temp -> next -> next;
                    delete temp2;
                }
                temp = temp -> next;
            }
            if( temp -> next -> data == value )
            {
                Node<T> *temp2 = temp -> next;
                temp -> next = NULL;
                delete temp2;
            }
        }
    }
    // Print
    void print()
    {
        Node<T> *temp = Head;
        cout << "{ ";
        while( temp != NULL )
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "\b\b \b\b}\n";
    }

};
