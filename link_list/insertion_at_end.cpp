// Write a cpp programe to insert the new at the end of linked list 
#include<iostream>
#include<vector>
using namespace std ; 
class node {
   public : 
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
    node *head = NULL ;
    for (int i = 0; i < vec.size(); i++)
    {
      if( head == NULL)
    {
        head = new node(vec[i]);
    }  
    else
    {
      node *tail = head ; 
      while( tail->next != NULL)
      {
          tail = tail->next ;
      }  
      node *temp ; 
      temp = new node(vec[i]);
      tail->next = temp;  
    }
    }
     node*temp = head ; 
    while( temp->next  != NULL)
    {
        cout<< "Data = " << temp->data <<  "  Address = " << temp->next << endl ;
        temp = temp->next ; 
    }
    
    
}