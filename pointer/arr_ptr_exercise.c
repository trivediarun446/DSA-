#include<stdio.h>
int main ()
{
    int arr[5]={3,4,5,2,1};
    // Point to be noted 
    // >>> arr :- this represent the starting address of the array 
    // >>> arr[0] this represent the value at index 0 
    // >>> &arr[0] this represent the address of an array at the index zero
    // so we conclude that the arr == &arr[0]

    int * p ; 
    p=arr ; /* this store the starting address of the array arr ;*/
    p=&arr[0] ; /*this also store the same starting address of an array */
    // p=&arr  this is incoorect ;

    // This is using the array 
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("Using pointer\n");
    // This is using the pointer 
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",p[i]);
    }
    
}