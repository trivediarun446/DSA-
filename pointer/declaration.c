#include <stdio.h>
int main ()
{
    int a =10; /* this is a noraml variable*/
     
    // a store in stack memory of container 4 bytes . and the address of a container is 200


    int *p ; /*this is a pointer varible*/
    // pointer variable is also a noramal variable it also occupied some space in stack memory . 
    // this is also a declaration 


    p=&a ; /*this line state that the pointer variable p store the address of a variable  which is 200*/
    //>>> p= 200 ;
    // this is a assignment or initialisation

    print("%d",a);
    // >>> 10 

    printf("%d",*p); /*this is derefrencing */
    // >>> 10 
    return 0 ;
}