//Write a cpp programe to insert the node at any position which is given by user 
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
    ;
    cin >> size;
    cout << "enter the element which you want to insert into the linked list " << endl;
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
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
    cout<< " Your current linked list is this " << endl ;
    node *temp ; 
    temp = head ; 
    while( temp != NULL)
    {
        cout<<" Data = " << temp->data << " Address = " << temp-> next << endl ; 
        temp = temp-> next ; 
    }
    int pos ; 
    cout<< " Enter the position where you want to insert the node "<< endl ; 
    cin >> pos ; 
    int val ; 
    cout<<" Enter the data on this node " << endl ;
    cin >> val  ;

    node *temporary  = head ; 
    pos-- ; 
    while (pos > 0)
    {
        temporary = temporary->next ;
        pos-- ; 
    }

    node *temp2 = new node(val);
    temp2->next = temporary->next ;
    temporary->next = temp2 ;

    node *rem = head ; 
    while (rem != NULL)
    {
        cout<< "Data = " << rem->data << " Address = "<< rem->next <<endl ; 
        rem = rem->next ; 
    }
    
    
}
