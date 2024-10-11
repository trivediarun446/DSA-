#include<iostream>
#include<vector>
using namespace std ; 

void merge(vector<int> &nums , int start , int mid , int end )
{
    vector<int> ans( end - start+1) ;
    // variable left store the starting index of left array 
    // variable right store the starting index of right array 
    // x variable store the starting index of ans vector 
    int left = start ; int right = mid+1 ; int x = 0 ;
    
    while( left <= mid && right <= end )
    {
        if(nums[left] <= nums[right])
        {
            ans[x] = nums[left] ;
            left++ ; 
        }
        else { 
            ans[x] = nums[right] ; 
            right++ ;
        }
         x++ ;
    }
    while(left <= mid )
    {
        ans[x]= nums[left] ;
        x++ ; left++ ;
    }
     while(right <= end )
    {
        ans[x]= nums[right] ;
        x++ ; right++ ;
    }

   for(int i = 0 ; i < ans.size() ; i++)
   {
       nums[start + i] = ans[i] ;
   }
    
}
void mergesort( vector<int> &nums , int start , int end )
{
   if(start >= end ) return ;

//    Divide the array into two parts so take the mid of the array 
 int mid = start + (end - start)/2 ;

//  Now we divide the array into two parts left and right by recursive callig of mergesort() 

//  Make the left part of the array from start to mid 
mergesort( nums , start , mid ) ;
//  Make the right part of the array from mid +1 to end 
mergesort(nums , mid+1 , end );

// After dividing the array into small part then merge the whole array 

merge( nums , start , mid , end ) ;


}


int main ()
{
    int k ; 
    cout<<"Enter the size of vector " << endl ;
    cin >> k ;
    int n ; 
    vector<int> vec(k) ; 
    for(int i =0 ; i < k; i++)
    {
       cin>>vec[i] ;
       
    }
    int start = 0 ; int end = k-1 ;
    mergesort( vec , start , end ) ;
    cout<< "Our sorted array is this " <<endl ;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<< vec[i] << endl ;
    }
    
    
}