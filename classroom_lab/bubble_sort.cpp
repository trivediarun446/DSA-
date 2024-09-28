// Write a programe of bubble sort in cpp
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std ; 
void bubblesort(vector<int> nums ,int n)
{
  for (int i = 0; i < n-1; i++)
  {
      for (int j = 0; j < n-1-i; j++)
      {
          if(nums[j]>nums[j+1])
          {
            swap(nums[j],nums[j+1]);
          }
      }
  }
  for (int i = 0; i < nums.size(); i++)
  {
      cout<<nums[i]<<endl ;
  }
  
}
int main ()
{
    vector <int> vec = {4,5,3,7,8} ;
    bubblesort(vec , vec.size());
   
}