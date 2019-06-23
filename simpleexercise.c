/*This program is a small adlibs game. 
The user is asked for a word (verb, noun, etc.) and then it prints out the story.*/
#include <stdio.h>
int main (void)
{
    char profession1[20];
    char city[20];
    char animal[20];
    char verb1[20];
    char adverb1[20];
    char color1[20];
    char adjective1[20];


    printf("Please enter a verb (a verb is an action, state, or occurrence. Ex: run, eats, ate)\n");
    scanf("%s",verb1);
    
    printf("Please enter a profession\n");
    scanf("%s",profession1);

    printf("Please enter an adjective (an adjective names an attribte. Ex:dirty, sad, happy, clean)\n");
    scanf("%s",adjective1);

    printf("Please enter a color\n");
    scanf("%s",color1);

    printf("Please enter the name of an animal\n");
    scanf("%s",animal); 

    printf("Please enter the name of a city\n");
    scanf("%s",city);

    printf("Today I went to the zoo. I %s as fast as I could to escape the %s.\n"
    "Next thing I knew I was wearing a %s shirt over my ankles!" 
    "The %s then proceeded to jump on the %s! \n"
    "What a wild night at the %s zoo.", verb1, profession1, color1, animal, profession1, city);

return 0;
}
