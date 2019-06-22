/*This program is a small adlibs game. 
The user is asked for a word (verb, noun, etc.) and then it prints out the story.*/
#include <stdio.h>
int main (void)
{
    char noun1[20];
    char noun2[20];
    char noun3[20];

    char verb1[20];
    char verb2[20];
    char verb3[20];

    char adverb1[20];
    char adverb2[20];
    char adverb3[20];
    
    char adjective1[20];
    char adjective2[20];
    char adjective3[20];


    printf("Please enter a verb (a verb is an action, state, or occurrence. Ex: run, eats, ate)\n");
    scanf("%c",&verb1);
    
    printf("Please enter a profession\n");
    scanf("%c\n",&noun1);

    printf("Please enter an adjective (an adjective names an attribte. Ex:blue, sad, happy, clean)\n");
    scanf("%c\n",&adjective1);

    printf("Please enter a color\n");
    scanf("%c\n",&adjective2);

    printf("Please enter the name of an animal\n");
    scanf("%c\n",&noun2); 

    printf("Please enter the name of a city\n");
    scanf("%c\n",&noun3);

    printf("Today I went to the zoo. I %c as fast as I could to escape the %c. \n Next thing I knew I was wearing a %c shirt over my ankles! The %c then\n proceeded to jump on the %c! What a wild night at the %c zoo.", verb1, noun2, adjective2, noun2, noun1, noun3);

return 0;
}
