// In this programe we construct the array in the heap memory using the melloc function 

#include <stdio.h>
#include<stdlib.h>
int main ()
{
    int *p ;

    p=(int*)malloc(5*sizeof(int));
    // This will give error 
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d",&(*p[i]);
    // }
    p[0]=2;p[1]=5;p[2]=3;p[3]=6;p[4]=11;
    for (int i = 0; i < 5; i++)
    {
        printf("%d",p[i]);
    }
    
    // Note
    // If we are using dynamically allocated memory then we should also delete the memory 

    // >>> Syntax for c language 
    free(p);
    // >>> Syntax for c++ language 
    // delete [] p  this methdod is only for array 
}