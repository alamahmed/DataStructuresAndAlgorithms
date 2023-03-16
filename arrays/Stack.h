#include "../preProcessors.h"
template <typename T>
class Stack
{

    public:
    Stack()
    {
        pointer = -1;
        len = 1;
        stack = new T[len];
    }
    Stack(int len)
    {
        pointer = -1;
        this -> len = len;
        stack = new T[len];

    }
    ~Stack()
    {
        delete stack;
    }
    void updateSize()
    {
        len *= 2;
        T *temp = new T[len];
        for(int i = 0; i < pointer; i++)
        {
            temp[i] = stack[i];
        }
        stack = temp;
    }
    int getSize()
    {
        return len;
    }

    void push(T value)
    {
        pointer++;
        if(pointer == len - 1)
            updateSize();
        stack[pointer] = value;
    }
    void pop()
    {
        if(pointer >= 0)
            pointer--;
        else
            cout << "There Is nothing to pop:\n";
    }
    T getValue()
    {
        if(pointer >= 0)
            return stack[pointer];
        else
            return NULL;
    }
    void peek()
    {
        cout << stack[pointer] << "\n";
    }

    private:
    T *stack;
    int len, pointer;


};