#include<iostream>
using namespace std ; 
int sum(int a , int b )
{
    int c=0 ; 
    c=a+b;
    return c ;
}
int main()
{
    int a=2 ;
    int b=3 ;
    cout<<"this is our sum"<<endl ;
    cout<< sum(a,b)<<endl ;
}