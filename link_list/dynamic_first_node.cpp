// Write a cpp programe to create a dynamically node 
#include<iostream>
using namespace std ; 
class node {

  public : 
    int data ; 
    node *next ; 
};
int main ()
{
    // In this line of code we create a ptr variable which is create in a stack 
    node *head ; 
    // In this line of code head ptr in pointing towards node in heap memory 
    head = new node() ;
    head -> data = 9 ;
    head -> next = NULL ;
    cout<< head->data << endl ; 
    cout<< head->next << endl ;
}