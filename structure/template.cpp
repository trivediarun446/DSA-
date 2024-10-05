// In this code snippet we learn how to make a genaric class . First of all I will write a code in simple class template then we will convert that class into the generlic class 
#include<iostream>
using namespace std ; 
// class arthmatic 
// {
//  private : 
//   int l ; 
//   int b ;
// public :
//  arthmatic(){l=b=1;}
//  arthmatic(int l , int b);
//  int sum();
//  int sub();
// };
// arthmatic :: arthmatic(int l , int b )
// {
//   this->l = l ; // this keyword is used for the indicating the private member and -> arrow is used for a pointer 
//   this->b = b ; 
// }
// int arthmatic :: sum ()
// {
//   return l+b ;
// }
// int arthmatic :: sub ()
// {
//     return l-b ; 
// }

//  Now we write class template 
template<class c >
class maths {
    private : 
    c l ;
    c b ;
    public :
    maths(){l=b=1 ;}
    maths(c l , c b) ;
    c sum () ;
    c sub ();
}; // This template work till that bracket 
template<class c >
maths <c> :: maths(c l , c b)
{
  this->l = l ;
  this->b = b ;
}
template <class c > 
c maths<c> :: sum ()
{
    return l+b ;
}
template < class c > 
c maths <c> :: sub ()
{
    return l-b ;
}
int main ()
{
    maths < int > arthmatic(10,5);
    cout << "Addition of two number is = " <<(int) arthmatic.sum() << endl ;
    cout << "Subtraction of two number is = " <<(int) arthmatic.sub() << endl ;
   
    return 0 ; 
}