// In this file we just start learing how to create a binary tree 

#include<iostream>
#include<vector>
#include<queue>
using namespace std ; 
//  Here we just create node 
class node{
    public:
       int data ; 
       node *left , *right ; 
    
    node(int val)
    {
        data = val ; 
        left = right = NULL ; 
    }

};

int main ()
{
  cout<< "Enter the value of root node" << endl ; 
  int x ;
  cin >> x  ; 
  queue <node*> q ; 
  node *root = new node(x);
  q.push(root);
  cout << "It is a details of root node " << endl ;
  cout << "root node val = " << root->data << endl  ; 
  cout << "root left address " << root->left << endl ;
  cout << "root right address " << root->right << endl;
}