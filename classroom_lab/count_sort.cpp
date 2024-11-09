// Write a cpp programe for count sort

// time complexcity = O(n)
// BUT it will take lot of space complexcity = O(n);

// Approach :

// 1) First of all get max element in the array

// 2) make a new array of size max+1 element

// 3) count the frequency of the element and store it into the new array

// 4) Now replace the element

#include <iostream>
#include <vector>

using namespace std;

int maxi(vector<int> &nums , int k)
{
    int maxi_num = INT32_MIN ;
    for (int i = 0; i < k; i++)
    {
        if( nums[i] > maxi_num ) maxi_num = nums[i] ;
    }
    return maxi_num ; 
}
void count_sort( vector<int> &nums , int k )
{
    int max_num = maxi(nums , k);
    int *arr ;
    arr = new int[max_num+1]{0};

    for (int i = 0; i < max_num + 1 ; i++)
    {
        arr[nums[i]]++ ;
    }

    int i = 0 ; int j =0 ; 
    while (i <= max_num)
    {
        while (arr[i] > 0)
        {
            nums[j++] = i;
            arr[i]--;
        }
        i++;
    }
    
    
}

int main()
{
    int k;
    cout << "Enter the size of vector " << endl;
    cin >> k;
    int n;
    vector<int> vec(k);
    for (int i = 0; i < k; i++)
    {
        cin >> vec[i];
    }
    count_sort(vec , k);
    for (int i = 0; i < k; i++)
    {
        cout<< vec[i] << endl ; 
    }
    
}