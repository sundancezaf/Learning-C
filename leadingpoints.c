#include <stdio.h>



int main (void)

{
    int size, i;
    printf("Please enter number of players: \n");
    scanf("%d", &size);

    int players [size];

    for (i=0; i < size; i++);
    {
        printf("Please enter the score for player %d\n",i);
        scanf("%d", &players[i]);
    }

    printf("%d",players[2]);




 return 0;
}