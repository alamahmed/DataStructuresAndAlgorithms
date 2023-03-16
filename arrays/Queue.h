#include "preProcessors.h"


template <typename T>
class Queue
{
    public:
    Queue()
    {
        size = 1;
        queue = new T[size];
        front = -1;
        rear = -1;
    }

    Queue( int size )
    {
        this -> size = size;
        queue = new T[ size ];
        front = -1;
        rear = -1;
    }
    
    ~Queue()
    {
        delete queue;
    }
    int getFront()
    {
        return front;
    }
    bool isEmpty()
    {
        if( front == -1 && rear == -1 )
        {
            return true;
        }
        return false;
    }

    void enqueue ( T value )
    {
        rear++;
        if( front == -1 )
            front++;
        
        if( rear == size )
        {
            updateSize();
        }   
        if( rear <= size - 1 )
        {
            queue[ rear ] = value;
        }
        else
        {
            cout << "You cannot Enter any more Elements\n";
        }
    }
    
    void dequeue()
    {
        if( front == -1 && rear == -1 )
        {
            cout << "Queue is empty:\n";
        }
        else if( front <= rear )
        {
            front++;
        }
        else
        {
            cout << "ERROR: There Are no More Elements Left To dequeue:\n";
        }
    }
    
    void updateSize()
    {
        size *= 2;
        T *temp = new T[ size ];
        for( int i = 0; i < size; i++ )
        {
            temp[ i ] = queue[ i ];
        }
        queue = temp;
    }

    void peek()
    {
        cout << queue[ front ] << "\n";
    }
    
    int getSize()
    {
        return size;
    }
    
    private:
    T *queue;
    int size, front, rear;

};