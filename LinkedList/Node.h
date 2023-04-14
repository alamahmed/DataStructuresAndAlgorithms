#include "../preProcessors.h"

template <typename T>
class Node 
{
    public:
    T data;
    Node *next;
    Node *prev;
    Node ()
    {
        data = 0;
        next = NULL;    
    }
    Node( T value )
    {
        this -> data = value;
        next = NULL;
    }
};
