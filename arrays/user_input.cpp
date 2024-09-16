//Write a programe in cpp to take user input of the  size of an array 
#include<iostream>
using namespace std ; 
int main ()
{
    int n ; 
    cout<<"enter the size of an array "<<endl ;
    cin >> n ; 
    int arr[n] ;
    
    // cout<<"your input array is this "<<endl ; 

    // In that case array has garbage value 
    for(int x : arr)
    cout<<arr[x]<<endl ; 

}