// Write a cpp programe to initalize the value using constructor 
#include<iostream>
using namespace std ; 

class node {
    public : 
        int  data ; 
        node *next ; 
        // In this line code we create a constructor 
        node ( int value )
        {
            data = value ; 
            next = NULL ;
        }
};
int main ()
{
    node *head ;
    // here we pass the value to constructor 
    head = new node(10);
    cout<< head->data << endl ; 
    cout<< head->next << endl ;
}