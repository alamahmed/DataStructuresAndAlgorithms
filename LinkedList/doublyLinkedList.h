#include "Node.h"

template <typename T>
class doublyLinkedList
{
    private:
    Node<T> *Head;
    public:
    doublyLinkedList()
    {
        Head = NULL;
    }
    // INSERTION
    void insertAtStart( T value )
    {
        Node<T> *newNode = new Node<T>( value );
        if( Head != NULL )
        {
            newNode -> next = Head;
            Head -> prev = newNode;
        }
        Head = newNode;
    }
    void insertAtEnd( T value )
    {
        Node<T> *newNode = new Node<T>( value );
        Node<T> *temp = Head;
        while ( temp -> next != NULL )
        {
            temp = temp -> next;
        }
        newNode -> prev = temp;
        temp -> next = newNode;
    }
    void insertAtPos( int pos, T value )
    {
        Node<T> *newNode = new Node<T>( value );
        if( !Head )
        {
            Head = newNode;
        }
        else if( pos <= 1 )
        {
            newNode -> next = Head;
            Head -> prev = newNode;
            Head = newNode;
        }
        else
        {
            Node<T> *temp = Head;
            int currPos = 1;
            while ( currPos < pos - 1 && temp -> next != NULL )
            {
                temp = temp -> next;
                currPos++;
            }
            newNode -> prev = temp;
            temp -> next -> prev = newNode;
            temp -> next = newNode;
        }
    }

    // DELETE
    void deleteAtStart()
    {
        if( Head )
        {
            Head = Head -> next;
        }
        else
        {
            cout << "There are no Nodes to Delete:\n";
        }
    }
    void deleteAtEnd()
    {
        if( Head )
        {
            Node<T> temp = Head;
            while ( temp -> next -> next != NULL )
            {
                temp = temp -> next;
            }
            temp -> next = NULL;
        }
        else
        {
            cout << "There are no Nodes to Delete:\n";
        }
    }
    void deleteAtPos( int Pos )
    {
        if( Head )
        {
            if( Head -> next -> next != NULL )
            {
                Node<T> *temp = Head;
                int currPos = 1;
                while ( currPos < Pos - 1 && temp -> next -> next != NULL )
                {
                    temp = temp -> next;
                    currPos++;
                }
                temp -> next -> prev = temp -> prev;
                temp = temp -> prev;
                temp -> next = temp -> next -> next;
            }
            else if( Head -> next != NULL )
            {
                Head = Head -> next;
                Head -> prev = NULL;
            }
            else
            {
                Head -> next = NULL;
            }
        }
    }

    // PRINT
    void print()
    {
        Node<T> *temp = Head;
        cout << "{ ";
        while ( temp != NULL )
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "\b\b \b\b}\n";
    }

};
