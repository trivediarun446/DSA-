// Cpp code for creating first node statically 
#include<iostream>
using namespace std ; 
class node { 
    public : 
    int data ; 
    node *next ; 
};
int main ()
{
    node first_node ; 
    first_node.data = 4 ; 
    first_node.next = NULL ; 

    cout << first_node.data << endl ;
    cout << first_node.next << endl ; 
}
