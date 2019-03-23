//learn how to use while statement
#include <stdio.h>
int main(void) {
    int diceValue = 0;
    int throws = 0;


    while(diceValue != 6){
        scanf("%d", &diceValue);
        throws = throws +1;
        }
    printf("Number of throws %d", throws);

    return 0;
}

