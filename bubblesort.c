//this program compares the second number to the first until all are in order
#include <stdio.h>

int main (void)

{
    int list[] = {12,4,6,7,8,33,24,67,81,23};
    int swap = 0;
    int i =0;
    int j = 0;
    int n = 10;
    int k=0;
for (k =0;k<n-1;k++)//first loop that goes around 10 times
{
    for (i = 0; i <n-1; i++) //this loop will check two numbers the 10 times (or however many numbers there are)
        {
            if (list[i] > list [i+1])
            {
                swap = list[i];
                list[i] = list [i+1];
                list[i+1]=swap;

            }

        }
}
    for (j=0;j<10;j++)
    {
    printf("%d,", list[j]);
    }

    return 0;
}