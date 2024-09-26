// Write a program in c for selection sort
#include <stdio.h>
#include<algorithm>
using namespace std ; 
int main()
{
    int n;
    printf("enter the size of an array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
        
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[min] > arr[j])
        {
            min = j ;
        }
        }
    swap(arr[i],arr[min]);        
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}