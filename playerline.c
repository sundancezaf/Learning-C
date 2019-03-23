/* which line should players go? It asks for last name and based on
how many characters last name is, either odd or even, it sends player to
line 1 or line 2 */

#include <stdio.h>

int main (void)
{

    char name[50];
    int number = 0;

    scanf("%s", name);

    while (name [number] != '\0')
        {
            number++;
        }



    if (number % 2 == 1)
    {
        printf("1");
    }

    else
        {
            printf("2");
        }


   return 0;

}