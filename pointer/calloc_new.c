#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *p ;
    // declaration of pointer variable 

    // If we want to use the heap memory we use malloc function 
    p=(int*)malloc(5*sizeof(int));

    // In the starting pointer take a place in stack . If we want to use heap memory then we use malloc function according to the number of element and data_type their will be a space created in heap memory . 
    // In the pointer variable which is in stack memory . It contain the starting address of malloc memory which is created in heap 



    // >>> for allocating the heap memory in cpp we use new function 

    // p=new_int[5];
}