/* You are participating in a game in which players collect points for various solved puzzles.
In the end, the player with the highest score wins. 

Please write a C program that uses a function "behind()" (which you also have to write)
in order to help with this task.
Your program should first read, from the user input, the number
of players participating in the game.
There are never more than 10 players in the game. Next, your program should
read the current scores
of each player and store them in an array. Then you should call the function
behind(), to which you pass as a first argument, 
the array holding the player's scores, and as a second argument the number
of players in the game. The function behind should
replace the scores stored in the array with the number of points by
which each individual player is behind the top-scoring player.
 */

#include <stdio.h> 

void top (int * ptr, int );
//start of main function
int main (void)

{
    int size, j;
    int *firstArray;

    printf("Please enter the number of players: \n");
    scanf ("%d",&size);

    int players[size];

    for (j=0; j<size; j++)
    {
        printf ("please enter the score of player %d\n",j);
        scanf("%d", &players[j]);
    }

     top(players, size);
    

return 0;

}
void top (int * ptr, int length)
{
    int l;
    int highest = 0;
    for (l=0; l<length; l++)
    {
        if (ptr[l]>ptr[l++])
        {
            highest = ptr[l];
        }
        else
        {
            highest= ptr[l++];
        }
    }
    
    printf("%d",highest);
}


