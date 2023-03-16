#include "Stack.h"

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

