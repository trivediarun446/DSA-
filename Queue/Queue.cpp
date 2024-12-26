// Write a cpp programe to contruct a queue 
#include <iostream>
using namespace std;

class Queue
{
public:
    int size;
    int front, rear;
    int *arr;
    Queue(int n)
    {
        size = n;
        front = rear = -1;
        arr = new int[n];
    }
    bool isFull()
    {
        return rear == size - 1;
    }
    bool isEmpty()
    {
        return rear == -1;
    }
    // Inserting element in a queue 
    void Enqueue(int val)
    {
        // Is empty
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = val;
        }
        // Isfull
        else if (isFull())
        {
            cout << "Queue is full we can not insert any element " << endl;
            return;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = val;
        }
    }
    void dequeue()
    {
        // is Empty 
        if(isEmpty())
        {
            cout<<"Element present in the Queue" << endl ; 
            return ;
        }
        else {
            front = front + 1 ;
        }
    }
    void print()
    {
        cout << "Your queue is this : " << endl;
        for (int i = front; i < size; i++)
        {
            cout << arr[i] << endl ; 
        }
    }
};

int main()
{
    cout<<"Enter the size of queue = " << endl ; 
    int x ; 
    cin >> x ;
    Queue q(x) ; 
    
    cout<< "Enter the elements of queue = " << endl ;
    for (int i = 0; i < x; i++)
    {
        int val ; 
        cin >> val ;
        q.Enqueue(val);
    }
    q.print() ;
    q.dequeue(); 
    q.print() ; 

    return 0 ; 
}