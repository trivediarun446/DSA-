#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int get_pivot( vector<int> &nums , int start , int end  )
{
    int pos = start ; 
    for (int i = start; i <= end; i++)
    {
        if(nums[i] <= nums[end])
        {
            swap(nums[i], nums[pos]);
            pos++ ;
        }
    }
    return pos-1 ; 
}
void quick_sort( vector<int> &nums , int start , int end )
{
   if(start >= end )
   return ;

   int pivot = get_pivot( nums , start , end ) ;

//    Left array 
  quick_sort(nums , start , pivot-1) ;

//   right array 
  quick_sort(nums , pivot, end);
} 
int main (){
    int k ;
    cout<<"Enter the size of array " << endl ; 
    cin >> k ; 
    vector<int> vec(k);
    cout<<"Please enter the array element" << endl ; 
    for (int i = 0; i < k; i++)
    {
        cin>> vec[i] ;
    }
    int start =0;
    quick_sort( vec , start  , k-1 ) ;
    cout<<"Your sorted array is this " << endl ; 
    for (int i = 0; i < k; i++)
    {
        cout<< vec[i] <<" " ;
    }
    
}