//Program prints numbers entered by user after storing them in an array
#include <stdio.h>

int main (void)

{ int array [3];
  int value = 0;
  int cell =0;

  int i = 0;
  for (i=0; i<3; i++)
  {
    printf("Enter a value\n");
    scanf("%d", &value);
    array[cell]= value;
    cell = cell + 1;

  }
{

for (cell= 0; cell < 3; cell++)
{
  printf("Your number is %d",array [cell]);
}

}


return 0;

}