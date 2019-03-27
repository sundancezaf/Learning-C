/*This program compares the integers in an array and prints
out the smallest integer using a custom function */
#include <stdio.h>

int min(int x, int y);

int main (void)
{


int list[3] ={6,4,5};
int i;

int final = list[0];

	for (i = 0; i<3; i++)
	{
		final = min(final, list[i+1]);
	}
	printf("%d",final);

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
