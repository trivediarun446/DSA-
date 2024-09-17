#include<stdio.h>
struct complex
{
    int real ;    /*---> 4 bytes*/
    int imaginary ;   /*----> 4 bytes */
    // >>> total it will take 8 bytes of memory 
};

int main ()
{
  struct  complex num ;
  num.real=3 ;
  num.imaginary=-3 ;
  printf("imaginary number is this %d + %d",num.real , num.imaginary);
}