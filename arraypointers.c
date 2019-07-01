/*This program shows how arrays and pointers work together */

#include <stdio.h>

int main (void)
{
/* Here in this array "players" is an actual pointer - if we were to ask for the address
it will print out the address where the array begins*/

    int players[] = {4, 9, 2};

//Here we make 2 integer pointer variables
    int *ptr, *ptr2;

//Printing out what is stored in the array 
    printf("What we have so far: %d, %d, %d\n",players[0], players[1],players[2]);

//To print the addresses we use "&" 

    printf("The addresses: %p, %p, %p\n", &players[0], &players[1],&players[2]);

    printf("This is where the array begins %p\n",players);

//giving ptr the same address as the start of the array
    ptr = players;

//Giving a pointer a different value:
    ptr2 = &players[1];
    printf("What we have as pointed by ptr2: %d\n",*ptr2);
    *ptr2 = 10;
    printf("We now have: %d\n",*ptr2);

//This is the same:  ptr2 == (ptr+1)

//Dereferencing other way -- in which (ptr+1) == players[2]
    *(ptr+1) = 76;
    printf("This is thew new value dereferenced by ptr2: %d\n", *ptr2);

return 0;

}