// Write a cpp programe to convert user input array into the linked list all node are inserted in the begning of the linked-list  
#include<iostream>
#include<vector>
using namespace std ; 

class node {
    public : 
        int data ; 
        node * next ; 
        node ( int value )
        {
            data = value ; 
            next = NULL ;
        }
};
int main()
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
    
    node * head ; 
    head = NULL ;
    for(int i =0 ; i < size ; i++)
    {
        if(head == NULL)
        {
            head = new node(vec[i]);
        }
        else {
            node * temp ; 
            temp = new node(vec[i]);
            temp->next = head ; 
            head = temp ; 
        }
    }

    cout<< "Your linked list is this " << endl ; 
    // For traversing all the element of linked list 
    node * temp = head ;  // this temp node is pointing toward that node on which heading node is pointing 
    while (temp != NULL)
    {
        cout<< "Data = " << temp->data << "  Address = " << temp->next << endl ;
        temp = temp -> next ; 
    }
}