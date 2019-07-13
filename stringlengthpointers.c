/*Write a program that will find length of string using pointers */

#include <stdio.h>

void findLength(char *);

int main (void)

{
    char *name[30];

    printf("Enter your full name:");
    scanf("%s",&name);

    findLength(name);


    return 0;


}

void findLength(char * array)
{   char *string[30];
    int sum, i;
    for (i = 0; i<30; i++)
        {
            while ((string + i) != "\0" && (string + i) != " ")
            {
                sum = sum + 1;
            }
        }

    printf("%d", sum);        

}
