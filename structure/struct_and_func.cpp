#include<iostream>
using namespace std ; 
struct reactangle
{
    int length ; 
    int breadth ;
};

void initailise(struct reactangle *ptr , int a , int b)
{
   ptr->length = a ;
   ptr->breadth = b ;
}
int area (struct reactangle r)
{
   return r.length * r.breadth ;
}
int change(struct reactangle *ptr , int a)
{
   ptr->length = a ; 
}
int main ()
{
    struct reactangle r ;
  initailise( &r , 10 , 5);
  area( r );
  change(&r , 18 );
}
