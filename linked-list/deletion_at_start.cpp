// Write a cpp programe to delete the node from the starting of linked list 
#include<iostream>
#include<vector>
using namespace std ; 
class node {
    public: 
    int data ; 
    node *next ; 
    node(int val )
    {
        data = val ; 
        next = NULL ;
    }
};
int main ()
{

    int size ; 
    cout<< " enter the size of linked list " << endl ; ;
    cin >> size ; 
    cout<<"enter the element which you want to insert into the linked list " <<endl ;
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cin>> vec[i] ; 
    }
    cout<< "Your input linked list element are :" << endl ; 
    for(int i : vec)
    {
        cout<< i << endl ; 
    }
    node *head , *tail ; 
    head = NULL ; 
    tail = NULL ;
    for (int i = 0; i < vec.size(); i++)
    {
        if (head == NULL)
        {
            head = new node(vec[i]);
            tail = head ; 
        }
        else {
            
           tail -> next = new node(vec[i]);
            tail = tail -> next ;
            
        }
    }
    node *temp ;
    temp = head ; 
    while( temp != NULL)
    {
        cout<< "data = " << temp->data << " address = " << temp->next << endl; 
        temp = temp->next ; 
    }

    node*del ;
    del = head ; 
    if (del == NULL)
    {
        cout<<" Their is no linked list . First of all you have to create a linked lis t"<<endl ; 
    }
    else{
        head = head->next ; 
        delete del ; 
    }
    temp = head ; 
    while (temp != NULL )
    {
        cout<< " Data = " << temp->data << " address = " << temp->next << endl ; 
        temp = temp-> next ; 
    }
    
}