#include <iostream>
using std::cout;
using std::cin;

template <typename T>
class Stack
{

    public:
    Stack()
    {
        pointer = -1;
        size = 1;
        stack = new T[size];
    }
    Stack(int size)
    {
        pointer = -1;
        this -> size = size;
        stack = new T[size];
    }
    ~Stack()
    {
        delete stack;
    }
    void updateSize()
    {
        size *= 2;
        T *temp = new T[size];
        for(int i = 0; i < pointer; i++)
        {
            temp[i] = stack[i];
        }
        T *tempPtr = stack;
        delete tempPtr;
        stack = temp;
    }
    void getSize()
    {
        cout << size << "\n";
    }

    void push(T value)
    {
        pointer++;
        if(pointer == size - 1)
            updateSize();
        stack[pointer] = value;
    }
    void pop()
    {
        if(pointer >= 0)
            stack[pointer--] = 0;
        else
            cout << "There Is nothing to pop:\n";
    }
    void peek()
    {
        cout << stack[pointer] << "\n";
    }
    
    private:
    T *stack;
    int size, pointer;
};



int main()
{
    Stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    
    myStack.peek();
    myStack.pop();

    myStack.peek();
    myStack.pop();

    myStack.peek();
    myStack.pop();

    myStack.peek();
    myStack.pop();

    myStack.peek();
    myStack.pop();

    myStack.getSize();
}

