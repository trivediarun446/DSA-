#include<iostream>
using namespace std ; 
int * fun(int n)
{
    int *p ; // pointer variable is declare beacuse they point towards the heap memory 
    p = new int[n]; // This new function is used for creating a array in heap memory 
    for (int i = 0; i < n; i++)
    {
        p[i]=i+1 ;
    }
    return p ; 
}

int main ()
{
    int n =5;
   int *ptr ; // We create this pointer variable beacause fun function return the address of the first element of array which is in heap memory 
   ptr = fun(5) ; // Here we store the returing array address into the pointer variable ;
   for (int i = 0; i < n; i++)
   {
       cout<<ptr[i]<<endl ;
   }
   
}