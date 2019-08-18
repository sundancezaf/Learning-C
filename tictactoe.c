#include <stdio.h>
//This function will print the board so we don't have to keep writing the loops
void printboard(char aboard[5][10] );

int main (void)

{
//Have to make the board first


char board[5][10] = {{'\0','\0','\0','|','\0','\0','\0','|','\0','\0'},
                    {'_','_','_','|','_','_','_','|','_','_'},
                    {'\0','\0','\0','|','\0','\0','\0','|','\0','\0'},
                    {'_','_','_','|','_','_','_','|','_','_'},
                    {'\0','\0','\0','|','\0','\0','\0','|','\0','\0'},

                };



printboard(board);

//Now we need our players
char player1= 'X';
char player2='O';
int quadrant;

printf("\n");
printf("\n");

printf("Please enter a quadrant:");
scanf("%d",&quadrant);



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
