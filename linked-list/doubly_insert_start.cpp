//  Write a programe in cpp to insert the new node at the starting of the linked list 
#include<iostream>
#include<vector>

using namespace std ; 

class node {
  public:
  int data ; 
  node*pre ;
  node*next ;
  node (int val )
  {
    data = val ; 
    pre = NULL ;
    next = NULL ; 
  }  
};
  int main()
  {
    int n ; cout<< "Enter the size of vector " << endl ; cin>>n ; 
   vector<int> vec(n) ;
   for (int i = 0; i < n; i++)
    {
        cin>> vec[i] ; 
    }
    
    node*head ; 
    head = NULL ; 
    for (int  i = 0; i < n; i++)
    {
        if(head==NULL)
        {
            head = new node(vec[i]);
        }
        else
        {
            node*temp = new node(vec[i]); 
            temp->next = head ; 
            head->pre = temp ; 
            head = temp ; 
        }
    }
    cout<<" Your Doubly linked List " << endl ; 
    node*temp = head ; 
    while (temp != NULL)
    {
        cout<< " preveious address = " << temp->pre << " data = " << temp->data << " next address = " << temp->next << endl ; 
        temp = temp->next ;
    }
    int key ; cout<< " Enter the value which u want to add at starting " << endl ; cin >> key ; 
    node*temp1 ; 
    if(head == NULL )
    {
        temp1=new node(key);
    }
    else{
        temp1 = new node(key) ;
        temp1->next = head ; 
        head->pre = temp1 ; 
        head = temp1 ; 
    }
    cout<< " After adding the node at starting " << endl ; 
    temp = NULL ;
    temp = head ; 
    while (temp != NULL )
    {
        cout<< " preveious address = " << temp->pre << " data = " << temp->data << " next address = " << temp->next << endl ;  
        temp= temp->next ;
    } 
  }
