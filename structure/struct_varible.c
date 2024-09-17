#include<stdio.h>
struct reactangle
{
    int length ; 
    int breath ; 
    // >>> This struct contain total 4+4 bits . But at the time of declaration structue wil not take any space in memory 
};
int main ()
{
     struct reactangle r ; /* this is just declaration */ 
     struct reactangle r ={10,5}; /*this is declaration plus initialisation */
    // >>> At that time rectangle name structure take total 8 bits in memory 


    // access the valur of structure by using dot operator 

    r.breath=4;
    r.length=3;
    int area ;
    printf("area of the triangle is ");
    printf("%d", sizeof(r));
    
} 