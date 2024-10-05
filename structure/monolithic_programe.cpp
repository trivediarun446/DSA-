// It is the example of monolitic programming 
// Monolithic Programming : In this programming programmer write the code in a single main function . call by refrence is also the example of Monolithic programming 
#include<iostream>
using namespace std ;
int main ()
{
    int length=0 ,breadth=0 ; 
     
    cout<<"Enter the length and breath of the reactangle "<<endl ;
    cin >> length >> breadth ;

    cout<<"Area of reactangle is = " << length * breadth << endl ;
    cout<<"perimeter of reactangle is = "<< 2*(length+breadth)<<endl ; 
    return 0 ;
}