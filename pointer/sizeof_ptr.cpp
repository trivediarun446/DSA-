#include<iostream>
#include<stdio.h>
using namespace std ; 
struct rectangel 
{
    int length ; 
    int breath ;
};

int main ()
{
    int *ptr1 ; 
    float *ptr2 ; 
    double *ptr3 ; 
    string *ptr4 ; 
    char * ptr5 ;
    struct rectangel *ptr6 ;
    
    
    cout<<sizeof(ptr1)<<endl ;
    cout<<sizeof(ptr2)<<endl ;
    cout<<sizeof(ptr3)<<endl ;
    cout<<sizeof(ptr4)<<endl ;
    cout<<sizeof(ptr5)<<endl ;
    cout<<sizeof(ptr6)<<endl ;
}
//  Note :- 
// pointer size is independent of its data type it depend upon the machine 