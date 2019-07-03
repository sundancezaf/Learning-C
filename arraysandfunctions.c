/*This program shows how to pass arrays to a function */
#include <stdio.h>

//Function prototype that takes a pointer and integer variable
void printArray(int *, int);
void squareArray (int *, int);

int main (void)
{
    int array [] = {3,8,9,};
//Arrays themselves don't know their size; you have to specify the size.
    int N = 3;

//calling function
    printArray(array, 3);

//calling other function
    squareArray(array, 3);

//Calling printArray function again to show the new numbers
    printArray(array, 3);

    return 0;
}

/*In this function we need to use a loop that will move from the start of the array until the end. 
The loop will also print out what's stored by what's dereferenced by the pointer.  */
    void printArray (int *ptr, int size)
    {
        int i;
        for (i=0; i<size;i++)
//This is the same: *(ptr+i) == ptr[i]
        {
            printf("%d,", ptr[i]);
        }
        printf("\n");
    }
//This function squares the numbers found in the array.

    void squareArray (int *ptr, int size)
    {
        int i;
        for (i=0; i<size;i++)
        {
            ptr[i]=ptr[i]*ptr[i];
        }
    }