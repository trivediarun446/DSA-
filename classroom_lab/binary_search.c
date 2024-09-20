#include<stdio.h>
int main ()
{
    int n , l=0 , j=0 ;
    int mid=0; 
    int count=0 ; 
    int pos=0 ;
    int key ;
    printf("enter the size of array\n ");
    scanf("%d",&n );
    int arr[n];
    printf("enter the array element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( int l = 0; l < n-1; l++)
    {
        for (j =l+1; j < n; j++)
        {
            if (arr[l]>arr[j])
        {
            int temp= arr[l];
            arr[l]=arr[j];
            arr[j]=temp ; 
        }
        }
    }
    for (int x = 0; x < n; x++)
    {
        printf("%d",arr[x]);
    }
    printf("enter the number which you want to search \n");
    scanf("%d",&key);
    int i=0 ;
    int k=n-1;
    while (i<=k)
    {
        mid=(i+k)/2 ;
        if (arr[mid]==key)
        {
            count++;
            // pos=mid+1 ;
            // printf("hle");
            
            break;
        }
        else if (arr[mid]>key)
        {
          k=mid-1 ; 
        }
        else {
            i=mid+1 ;
        }
    }
    if (count==1)
    {
        printf("Number is found ");
    }
    else 
    {
        printf("Number is not found");
    }
}