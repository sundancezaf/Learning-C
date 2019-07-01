/*This program shows how arrays and pointers work together */

#include <stdio.h>

int main (void)
{

/*Simple array. Here in this array "players" is an actual pointer - if we were to ask for the address
it will print out the address where the array begins*/

    int players[] = {4, 9, 2};
    int *ptr, *ptr2;

//Printing out what is stored in the array and the addresses
    printf("What we have so far: %d, %d, %d\n",players[0], players[1],players[2]);

    printf("The addresses: %p, %p, %p\n", &players[0], &players[1],&players[2]);

    printf("This is where the array begins %p\n",players);

//giving ptr the same address as the start of the array
    ptr = players;

//giving pointers a different value 
    ptr2 = &players[1];
    printf("What we have at ptr2: %d\n",*ptr2);

//printing what we have now at ptr2
    *ptr2 = 10;
    printf("%d\n",*ptr2);

return 0;

}