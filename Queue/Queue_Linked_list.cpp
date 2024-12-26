#include<iostream>
using namespace std ; 

class Node{
  public:
  int data ; 
  Node *next ;

  Node(int val){
    data = val  ;
    next = NULL ; 
  }
};

class Queue{
  public :
  Node *front , *rear ; 
  Queue()
  {
    front = rear = NULL ;
  }

  bool isEmpty()
  {
    return front == NULL ; 
  }

  void enqueue(int x)
  {
    // check is empty 
    if(isEmpty())
    {
      Node *temp = new Node(x) ;
      front = temp ;
      rear = front ; 
    }
    else{
      Node *temp = new Node(x) ; 
      rear->next = temp ; 
      rear = temp ; 
    }
  }
  void print()
  {
    Node*temp ; 
    temp = front ; 
    while (temp)
    {
      cout<<temp->data << endl ; 
      temp = temp->next ; 
    }
  }
};
int main()
{
  Queue q ; 
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);

  q.print();
}
