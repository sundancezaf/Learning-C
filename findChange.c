/*Imagine that your friend is a cashier, but has a hard time counting back change to customers.
Create a program that allows him to input a certain amount of change, and then print 
 how many quarters, dimes, nickels, and pennies are needed to make up the amount needed. 
 Example: if he inputs 1.47, the program will say that he needs 5 quarters, 2 dimes, 0 nickels, and 2 pennies.
Subgoals:
So your friend doesn't have to calculate how much change is needed, allow him to type in the amount of money
 given to him and the price of the item. The program should then tell him the amount of each coin he needs like usual.
// To make the program even easier to use, loop the program back to the top so your friend can continue to use 
the program without having to close and open it every time he needs to count change*/

#include <stdio.h>
#include <string.h>

int quarterdiv(double a);
int main (void)

{
int change, quarters,nickels, pennies,finalquarters,finaldimes,finalpennies,finalnickels,i;
double price[6];
double total;

printf("What's the total?");
scanf("%lf", &price,&total);
finalquarters = quarterdiv(total);

for(i=0;i < 6;i++)
{
    if (price[i]== '.')
    {
        change = (price[i]* 2) + price[i+1];
    }
    else
    {
        i++;
    }   
}

finaldimes = change/10;
if (change%10 >= 5)
{
    finalnickels = (change%10)/5;
}
else
{
    finalpennies = change%10;
}
    
printf("You need %d quarters, %d dimes, %d nickels, %d pennies",finalquarters,finaldimes,finalnickels,finalpennies);

    return 0;
}

int quarterdiv(double a)
{
    int finquart;

    finquart = a/.25;

    return (finquart);
}