#include<iostream>
using namespace  std  ; 
class reactangle{
private:
int length ; 
int breath ; 

public : 
reactangle(){length = breath = 1 ; } //  It is defult constructor 
reactangle(int l , int b); // It is a parametrised constructor 
int area();
int parameter();
~reactangle(); // It is a distructor which will erase the constructor data ;

};
reactangle::reactangle(int l , int b)
{
    length = l ; 
    breath = b ;
}
int reactangle :: area ()
{
    return length*breath ;
}
int reactangle :: parameter ()
{
    return 2*(length+breath);
}
reactangle:: ~reactangle ()
{
  cout<<"distructor" <<endl ;
}
