/*This program shows how to assign and dereference pointers */

#include <stdio.h>

int main (void)

{
    //creating the variable

    int j = 3;

    //define pointer variable and point using the "&" operator

    int * first= &j;

    //how to use them  -- using dereferencing operators - these are the same


    printf("%d\n", *first);
    printf("%d", j);

    /* how to find the address of the variable -- %p prints the actual pointer */

    printf("%p", first);



    return 0;

}