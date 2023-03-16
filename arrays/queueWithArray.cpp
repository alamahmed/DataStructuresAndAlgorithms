#include "Queue.h"

int main()
{

    Queue <int> myQueue;
    
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.enqueue(40);
    myQueue.enqueue(50);
    
    myQueue.peek();
    myQueue.dequeue();

    myQueue.peek();
    myQueue.dequeue();

    myQueue.peek();
    myQueue.dequeue();

    myQueue.peek();
    myQueue.dequeue();

    myQueue.peek();
    myQueue.dequeue();

    cout << myQueue.getSize() << "\n";

}


