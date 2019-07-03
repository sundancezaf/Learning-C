/*This program shows how to pass pointers to a function */

#include <stdio.h>

//function prototype that takes a pointer variable
void plusThree(int *);

int main (void)

{
    int n;
    printf("Please enter a number\n");
    scanf("%d",&n);
    printf("What we have so far: %d\n", n);

//defining the pointer variable -- passing it to the function

    plusThree(&n);
    printf("What we have now: %d\n", n);
    return 0;
}

//function that takes the pointer 
void plusThree(int *j)
    {
        *j = *j + 3;
         
         return;
    }