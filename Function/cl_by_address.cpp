#include<iostream>
using namespace std ;

void swap(int *x , int *y)// Here we pass the pointers because they contain the passing address of the actual parameters .
{
    int temp = *x ;
    *x=*y ; 
    *y= temp ;
    cout<< *x << " " << *y << endl ;
}
int main ()
{
    int a =10 ; 
    int b =20 ; 
    swap(&a,&b); // Here we pass the address of two variable 
     
    // In this actual parameters are remain same 
}