#include <stdio.h>
//This function will print the board so we don't have to keep writing the loops
void printboard(char aboard[5][10] );

int main (void)

{

//The board
char board[5][10] = {{'-','-','-','|','-','-','-','|','-','-'},
                    {'_','_','_','|','_','_','_','|','_','_'},
                    {'-','-','-','|','-','-','-','|','-','-'},
                    {'_','_','_','|','_','_','_','|','_','_'},
                    {'-','-','-','|','-','-','-','|','-','-'}};

//-----------------let's print the board----------------------------
printboard(board);

//spacing in the board
printf("\n");
printf("\n");


int quadrant;
char * pointer = board [1][1];

char * quadrant1 = board[1][2];
quadrant1 = "X";

//Asking where to place the marker
printf("Please enter a quadrant:");
scanf("%d",&quadrant);


//Print the updated board
printboard(board);

return 0;
}


//This function just prints the board that is being used
void printboard(char aboard[5][10])
{
 int l, k;
for (l = 0;l<5;l++)
{
    printf("\n");
    for(k=0;k<10;k++)
    {
        printf("%c",aboard[l][k]);
    }
}
}


