#include<stdio.h>
int main()
{
    int a =10 ;  
    int *p ; 

    p=&a ; 
    printf("%d",p);
    // >>> address of a 
    printf("%d",&a);
    // >>> address of a 
    printf("%d", *p);
    // >>> value of a s
}