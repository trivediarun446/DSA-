// 1) In the formal parameter we always pass the starting index of the array or it pointed towards the first element of the array 
// 2) Array always pass by address 
// 3) arr[] : - This means that it pointing to an array only ;
// 4) *arr this means that that the starting address of an array and this type of passing is may use also with the integer as well as array 
// 5) If we change formal parameters then changes also reflect in actual parameters so arrays are mutable 
#include <iostream>
using namespace std ; 
// First method to pass array as a argument 
void fun(int arr[] , int n )
{
  for(int i =0 ; i< n ; i++)
  {
      cout<< arr[i] << endl ; 
  }

}

// Second method to pass the array as  argument 
void fun1(int *arr , int n )
{
  for(int i =0 ; i< n ; i++)
  {
      cout<< arr[i] << endl ; 
  }

}
int main ()
{
    int arr1[4]={1,2,3,4} ;
    // First method to pass array as a argument 
    fun(arr1 , 4);

    int arr2[5] = { 3,4,5,6,3};
    // Second method to pass array as a argument 
    fun1(arr2 , 5);

}