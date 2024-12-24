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
    
    int n ; 
    cout<<"enter the which node you want to delete "<<endl ; 
    cin >> n ;
    if (n==1)
    {
        node *temp1 = head ; 
        head = head-> next ;
        delete temp1 ;
    }
    n-- ; 
    node *current = head ; 
    node *pre = NULL ; 
    while(n>0)
    {
        pre = current ; 
        current=current->next ;
        n-- ; 
    }
    pre->next = current->next ;
    delete current ;

    node*cur = head ; 
    while(cur != NULL)
    {
        cout<< cur->data << " " << cur->next << endl ; 
        cur= cur->next ; 
    }
    
    
}