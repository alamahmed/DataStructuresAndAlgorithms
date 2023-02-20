#include <iostream>
using std::cout;
using std::cin;

template <typename T>
class Queue
{

    public:

    Queue()
    {
        size = 1;
        queue = new T[size];
        pointer = -1;
    }

    Queue(int size)
    {
        this -> size = size;
        queue = new T[size];
        pointer = -1;
    }
    
    ~Queue()
    {
        delete queue;
    }

    void push(T value)
    {
        pointer++;
        if(pointer == size - 1)
            updateSize();
        queue[pointer] = value;
    }
    
    void pop()
    {

        if(queue[0] != 0)
        {
            queue[0] = 0;
            for(int i = 0; i < size - 1; i++)
            {
                queue[i] = queue[i + 1];
            }

        }
        else
            cout << "ERROR: There Are no More Elements Left To Pop:\n";
    }
    
    void peek()
    {
        cout << queue[0] << "\n";
    }
    
    void getSize()
    {
        cout << size << "\n";
    }

    void updateSize()
    {
        size *= 2;
        T *temp = new T[size];
        for(int i = 0; i < pointer; i++)
        {
            temp[i] = queue[i];
        }
        T *tempPtr = queue;
        delete tempPtr;
        queue = temp;
    }
    
    private:
    T *queue;
    int size, pointer;

};


int main()
{

    Queue <int> myQueue;
    
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);
    
    myQueue.peek();
    myQueue.pop();

    myQueue.peek();
    myQueue.pop();

    myQueue.peek();
    myQueue.pop();

    myQueue.peek();
    myQueue.pop();

    myQueue.peek();
    myQueue.pop();

    myQueue.getSize();

}


