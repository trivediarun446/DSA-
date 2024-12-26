// Write a programe to create a circular queue using cpp 

#include<iostream>
using namespace std ; 

class Queue {
    public:
    int size ;
    int front , rear ; 
    int *arr ; 
    Queue( int n )
    {
        size = n ;
        front = rear = -1 ;
        arr = new int[n] ;
    }
    bool isFull(){
        return (rear+1) % size == front ; 
    }
    bool isEmpty()
    {
        return front == -1 ;
    }
    void CircularEnqueue(int val)
    {
        // Is Full 
        if( isFull())
        {
          cout<<"Queue is full we can not insert any element " << endl ;
          return ;
        }

        // Is Empty
        else if( isEmpty())
        {
            front = rear = 0 ; 
            arr[front] = val ;
        }
        // Inserting the element 
        else {
            rear  = (rear+1 ) % size ; 
            arr[rear] = val ;
        }
    }
    void print()
    {
        cout << "Your array is this" << endl ;
        for (int i = (front) ; i < size; i++)
        {
            cout << arr[i] << endl ; 
        }
        
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout<<"Queue is empty no element will insert " << endl ; 
            return ;
        }
        else{
            if(front == rear)
            {
                front = rear = -1 ; 
            }
            else{
            front = (front + 1 ) % size ; 
            }
        }
        
    }

};

int main ()
{
    int x ; 
    cout << "Enter the size of an array " << endl ; 
    cin >> x ; 
    Queue q(x) ;
    cout<<"Enter the Queue element" << endl ;
    for (int i = 0; i < x; i++)
    {
        int val ; 
        cin >> val ; 
        q.CircularEnqueue(val) ;
    }
    q.print();
    q.dequeue() ; 
    q.dequeue() ;
    q.dequeue() ; 
    cout<<"After dequeue the element " << endl ; 
    q.print();
    q.CircularEnqueue(45) ;
    q.CircularEnqueue(65) ;
    q.CircularEnqueue(75) ; 
    cout<<"After enqueue the elment " << endl ; 
    // q.print();
    while(!q.isEmpty())
    { 
        cout << q.arr[q.front] << endl ;
        q.dequeue();
    }
    return 0 ;
}
