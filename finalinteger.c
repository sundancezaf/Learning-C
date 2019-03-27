#include <stdio.h>
int min(int x, int y);

int main (void)

    {
        int list[10] = {3, 4, 82,23,44,12,7,9,13, 24};
        int i;
        int smallestint = list[0];

            for (i=0;i<10;i++)
            {
                smallestint = min(smallestint, list[i+1]);
            }


        printf("%d", smallestint);

        return 0;
    }

int min (int x, int y)
{
    int result;

    if (x < y)
    {
        result = x;
    }

    else 
    {
        result = y;
    }

    return result;
}