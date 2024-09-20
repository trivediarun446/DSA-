#include<stdio.h>
int linearsearch(int arr ,int n ,int key )
{
 
}
int main ()
{
 int n ; 
 int key ;
 printf("enter the number of element in array\n"); 
 scanf("%d",&n);
 int arr[n]; 
 printf("enter the array element \n");
 for (int i = 0; i < n; i++)
 {
    scanf("%d",&arr[i]);
 }
 printf("enter the number which you want to search \n");
 scanf("%d",&key);
 int count=0 , pos=0 ;
for (int i = 0; i < n; i++)
{
    if (arr[i]==key)
    {
        count++ ;
        // printf("number is found in the position of %d",i+1);
        pos=i+1;
    }
}
if(count==1)
{
printf("Number is found at pos %d",pos);
}
else 
{
   printf("number is not found "); 
}
}