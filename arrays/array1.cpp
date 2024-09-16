#include<iostream>
using namespace std ; 
int main ()
{
    // here we initialised the array 
    int a[6]={3, 4,2,4,5 ,5 } ; 
    cout<<sizeof(a)<<endl ;


    // here we initialised the array 
    int b[]={4,5,6,3,3} ;
    // in this method of initialisation we directly give the array element accorting to the number element array automatically change their size 
    cout<<b[3]<<endl ; 


    int c[8]={3,4,5,6,7};
    cout<<b[7]<<endl ;
    // if we access the 7th element then in the output terminal the value is 0 


    // How to access the element of an array using for loop 
    for (int i = 0; i < sizeof(b); i++)
    {
        cout<<b[i]<<endl ;
    }

    cout<<"new array"<<endl ;

    // Another way to access array element using for loop 
    for(int x : c)
    {
        cout<<x<<endl;
    }
    
}