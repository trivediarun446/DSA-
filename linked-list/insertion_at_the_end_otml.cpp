// Write a programe to insert the node at the end of linked list

// Approach :-

// 1) We create a ptr name tail which is pointing towards the head of the linked list at the time of when linked list is not created

// 2) After the adding the new at the end give the address of last element to the tail pointer

//  3) Which is pointing towards the end

#include <iostream>
#include <vector>
using namespace std;

class node
{
    public : 
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    int size;
    cout << " enter the size of linked list " << endl;
    
    cin >> size;
    cout << "enter the element which you want to insert into the linked list " << endl;
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }
    cout << "Your input linked list element are :" << endl;
    for (int i : vec)
    {
        cout << i << endl;
    }
    node *head, *tail;
    head = NULL;
    tail = NULL;
    for (int i = 0; i < size; i++)
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
        cout<<" Data = " << temp->data << " Address = " << temp-> next << endl ; 
        temp = temp-> next ; 
    }
    
    

}