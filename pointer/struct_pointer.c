#include<stdio.h>
struct reactangle
{
    int length ; 
    int breath ;
};
int main ()
{
    // Its normal declaration of struct data type 
    struct reactangle r ={4,5}; 

    // Here the declaration and initalisation of pointer variable of struct data type 
    struct reactangle *p=&r ; 
    
    // Note :- 1) for accessing the normal variable we (.) operator 
    r.length=6 ;
   
//    2) For accessing the object by using pointer variable we have to methods (*p).  and p-> 
       
      (*p).breath=9 ;
      p->length=3 ;

    //   now create reactangle size data type in heap memory 
    struct reactangle *ptr ; /* at this time a pointer variable is created on stack memory */

    // For making reactangle type data type in heap we use malloc function 

    ptr =   (struct ractangle*)malloc(sizeof(struct reactangle)); /*malloc function is void type function so we need to type cast the malloc function */
    //  Now the pointer variable  ptr  pointing to wards the reactangle type data type in heap memory 

    // for accessing the object using arrow operator 
    ptr->length = 17 ; 

    // For making structure in heap in c++ we use new keyword instead of malloc or colloc function 
    // ptr= new reactangle ;

}