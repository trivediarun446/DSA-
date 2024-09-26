#include<stdio.h>
#include<iostream>
// using namespace std ;
int main()
{
    // This refrenceing feature is used only in cpp language 
    // This is useful in parameter passing in a function 


    int a =10 ; /* it is a noraml data variable */

    int &r=a ; /* it is a refrence when ever we put & before a integer name then it is called refence */
    // we should always use initalised it at the time of declaration other wise it will give error 
    
    int *p; /*when ever we put * before the integer name we use as pointer variable */
    // refrence is nothing but it just the another name or nick name of the variable 

    std::cout << a << std::endl;
    r++ ;
    std::cout << r << std::endl;
    std::cout << a << std::endl;

}