#include<iostream>
using namespace std ; 
class reactangle
{
private:
    int length ;
    int breadth ;
public:
//    Instead of initailise function we can use constructor . Beacuse constructor can declare and initlaise the object syntax or function of constructor 
//    reactangle(int l , int b)     -> It is a constructor . Function of same of class is called constructor 
//    {
//        length = l ; 
//        breadth = b;
//    }
   void initailise(int l , int b)
   {
       length = l ;
       breadth = b;
   }
   int area()
   {
     return length * breadth ;
   } 
   void change (int k)
   {
       length = k 
       ;
   }
   
};
int main()
{
    reactangle r ; 
    r.initailise(10 ,4); // instead of this we can use reactangle r(10,4) ;
    r.area ();
    r.change(49);
    return 0 ;
}

