#include<stdio.h>
struct playing_card
{
    // carts are 
    // face = 1,2,3,4,5............11,12,13
    // shape = 0, 1, 2,3,4 
    // color = 0,1 ;
    int face ; 
    int shape ; 
    int color ; 
};

int main()
{
    // if want to access this element in main by using dot operator 
    struct playing_card card ; 
    card.shape = 0 ; 
    card.face= 4 ; 
    card.color= 1 ; 
    // this structure take 12 bytes of memory 

    struct playing_card card1= {2,3,0}  ;

    // line number 25 means that how to inistalised the structure of array ; 

    struct playing_card deck[52];

    // >>> This array take the total size is memory is 52*12 bytes  ;
    
    
    

}