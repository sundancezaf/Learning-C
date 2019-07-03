/* You are participating in a game in which players collect points for various solved puzzles.
In the end, the player with the highest score wins. You would like to know how far behind 
the highest-scoring person everyone else is in. 

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

To help you out, the main function of the program has already been written, 
so your job is simply to write the function behind(), whose protype is also given to you. */

#include <stdio.h> 


int main (void)

{
    int size, j;
    int highest = 0;
    int players[10];
    int H = 10;
    
    printf("Please enter the number of players: \n");
    scanf ("%d",&size);

    for (j=0; j<size; j++)
    {
        printf ("please enter the score of player %d\n",j);
        scanf("%d", &players[j]);
    }

    for (j=0; j<size; j++)
    {
        if (players[j] > players[j+1])
            {
                highest = players[j];
            } 
    }
   
    
    printf("%d\n", highest);



    return 0;
}
