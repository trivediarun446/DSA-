#include<iostream>
#include <vector>
using namespace std ; 
void insertionsort(vector<int> vec , int n )
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(vec[i]>vec[j])
            {
               swap(vec[i],vec[j]);
            }
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<endl ;
    }
}
int main()
{
    vector <int> nums ={5,2,9,1,6};
    insertionsort(nums , nums.size());
}