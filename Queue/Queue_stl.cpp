// Write a cpp programe to print all the element of queue
#include<iostream>
#include<queue>

using namespace std ; 

// Approach 1) 
/*
  1) First of all we print the front element and pop the front element
*/

// Approach 2) 
/*
  1) create a data structure 
  2) Print front element of queue and push back it into the data structure 
  3) then bach push into the queue 
*/

// Approach 3) 
/*
  1) print fisrt element and pop it into the back of queue 
*/

int main()
{
    queue<int> q ; 
    int n ; 
    cout<< "Enter the size of queue " << endl ; 
    cin >> n ; 
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element in to the queue :" << endl ; 
        int val ;
        cin >> val ;
        q.push(val) ;
    }

    cout << "Your queue elements are these : " << endl ; 
    for (int i = 0; i < n; i++)
    {
        cout<<q.front() ; 
        q.push(q.front()) ;
        q.pop();
       
    }
    
}