#include "Node.h"

template <typename T>
class LinkedList
{
    private:
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
        if( Head == NULL )
        {
            Head = newNode;
            newNode -> next = Head;
        }
        else
        {
            Node<T> *temp = Head;
            while( temp -> next != Head )
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
            newNode -> next = Head;
            Head = newNode;
        }
    }
    void insertAtEnd( int value )
    {
        Node<T> *newNode = new Node<T>( value );
        if( !Head )
        {
            insertAtBegining( value );
        }
        else
        {
            Node<T> *temp = Head;
            while( temp -> next != Head )
            {
                temp = temp -> next;
            }
            temp -> next = newNode;
            newNode -> next = Head;
        }
    }
    void insertAtPos( int pos, int value )
    {
        Node<T> *newNode = new Node<T>( value );
        if( !Head || pos <= 0 )
        {
            insertAtBegining( value );
        }
        else
        {
            Node<T> *temp = Head;
            int count = 1;
            while( count < ( pos - 1 ) && temp -> next != Head )
            {
                temp = temp -> next;
                count++;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }

    // REMOVE

    // PRINT
    void print()
    {
        Node<T> *temp = Head;
        cout << "{ ";
        while( temp -> next != Head )
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << temp -> data << " }\n";
    }
};


// template <typename T>
// class LinkedList
// {
//     private:
//     Node<T> *Head;

//     public:
//     LinkedList()
//     {
//         Head = new Node<T>;
//     }
//     // INSERTION
//     void insertAtEnd( T value )
//     {
//         Node<T> *newNode = new Node<T>( value );
//         if( !Head )
//         {
//             Head = newNode;
//         }
//         else
//         {
//             Node<T> *temp = Head;
//             while( temp -> next != Head )
//             {
//                 temp = temp -> next;
//             }
//             temp -> next = newNode;
//         }
//         newNode -> next = Head;
//     }
//     void insertAtBegining( T value )
//     {
//         Node<T> *newNode = new Node<T>( value );
//         if( Head -> next != NULL )
//         {
//             newNode -> next = Head -> next;
//         }
//         else
//         {
//             newNode -> next = Head;
//         }
//         Head -> next = newNode;
//     }
//     void insertAtPos( int pos, int value )
//     {
//         int count = 1;
//         if( pos < 0 )
//             insertAtBegining( value );
//         else
//         {
//             Node<T> *temp = Head;
//             Node<T> *newNode = new Node<T>( value );

//             while( count < pos && temp -> next != Head )
//             {
//                 temp = temp -> next;
//                 count++;
//             }
//             if( !temp -> next )
//             {
//                 newNode -> next = Head;
//             }
//             else
//             {
//                 newNode -> next = temp -> next;
//             }
//             temp -> next = newNode;
//         }
//     }
    
//     // REMOVE
//     void removeFromStart()
//     {
//         if( Head -> next != NULL )
//         {
//             Node<T> *temp = Head;
//             while ( temp -> next != Head )
//             {
//                 temp = temp -> next;
//             }
//             Head = Head -> next;
//             temp -> next = Head;
//         }
        
//     }
//     void removeFromEnd()
//     {
//         Node<T> *temp = Head;
//         while ( temp -> next -> next != Head )
//         {
//             temp = temp -> next;
//         }
//         temp -> next = Head;
//     }
//     void removeAtPos(int pos)
//     {
//         int count = 1;
//         if( pos > 0 )
//         {
//             Node<T> *temp = Head;

//             while( count < pos && temp -> next -> next != Head )
//             {
//                 temp = temp -> next;
//                 count++;
//             }
//             temp -> next = temp -> next -> next;
//         }


//     }
//     void removeAtValue( int value )
//     {
//         Node<T> *temp = Head;
//         while( temp -> next != Head )
//         {
//             if( temp  -> next -> data == value )
//             {
//                 temp -> next = temp -> next -> next;
//             }
//             temp = temp -> next;
//         }
//     }
    
//     // PRINT
//     void print()
//     {
//         if( Head )
//         {
//             Node<T> *temp = Head;
//             cout << "{";
//             while ( temp -> next != Head )
//             {
//                 temp = temp -> next;
//                 cout << " " << temp -> data << " ->";
//             }
//             cout << "\b\b} \n";
//         }
//     }

// };