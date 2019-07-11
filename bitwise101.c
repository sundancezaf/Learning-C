#include <stdio.h>

int main (void)

{
    int var = 3;

// 0000 0011 would be 3 

/* The shift operators: << and >>. The format is var << or >> int. With the left int 
specifying how many places the bits need to be shifted. */
 

/*Shift by 3 and print it out. The bits are then shifted 3 places to the left. So the new bits 
become 0001 1000 which equals to 24.
 */

    var = var << 3;
    printf("%d\n", var);

/* Below we shift to the right by 1 bit. The new bits then become 0000 1100  which equals to 12.
Below we print out how it would look. The variable itself though hasn't changed.*/

    printf("%d\n", var>>1); 

//Showing var as unchanged

    printf("%d\n", var);

/*The XOR operator: Either A or B is 1 which gives output 1 but if both A and B are 1 then output equals 0 . --- */


//so if we do this:
    var = var ^ 2;

/*This does the XOR operation which means var = 24 and 2 = 0000 0010.
Now we do the operation which = 0001 1010 or 26.
*/

    printf("%d\n", var);

/* What about XOR 7? let's try it. So we have 26 = 0001 1010 and 7 = 0001 1101 when we do the operation 
then it turns into 0001 1101 or 29 */

    var = var ^ 7;
    printf("%d\n", var);

    return 0;
}


