// write a cpp programe to reverse the queue 
#include<iostream>
#include<queue>

using namespace std ; 

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

    vector<int>ans ; 
    for (int i = 0; i < n; i++)
    {
        ans.push_back(q.front());
        q.pop() ; 
    }

    for (int i = n-1; i <= 0; i--)
    {
        cout<< " hlw" << endl ; 
        cout<< ans[i] << " " ; 
    }
    for (int i = n-1; i >= 0; i--)
    {
        q.push(ans[i]) ; 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<q.front() << " "; 
        q.push(q.front()) ;
        q.pop();
       
    }
    return 0 ;
}