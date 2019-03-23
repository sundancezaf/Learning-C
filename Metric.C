#include <stdio.h>
#include <string.h>

double fahrenheit(double a);
double pounds (double b);
double miles (double c);
double inches (double d);


int main (void)
{
    int i, many, comparisonkm, comparisoncm, comparisonC, comparisonkg;
    double quantity1;
    double final;
    char unit[3];
    char km[2] = {"km"};
    char cm[2] = {"cm"};
    char C[1] = {"C"};
    char kg[2] = {"kg"};
    char mi[2] ={"mi"};
    char lbs[3] ={"lbs"};
    char in[2]={"in"};
    char F[1]={"F"};

    printf("how many calculations?");
    scanf("%d", &many);

    for (i=0;i<many;i++)
        {   printf("Enter what you need to calculate followed by a space and the unit\n");
            scanf("%lf %s",&quantity1,unit);
            {

               comparisonkm = strncmp (unit, km,2);
                {
                        if (comparisonkm ==0)
                    {
                        //call function
                        final = miles(quantity1);
                        //switch the units
                        //print result
                        printf("%lf mi \n",final);
                    }
                }
            comparisoncm =strncmp (unit, cm,2);
                   {
                     if (comparisoncm==0)
                    {
                        //call function
                        final = inches(quantity1);
                        //switch the units
                        //print result
                        printf("%lf in\n",final);
                    }
               }

            comparisonC = strncmp(unit, C, 1);
               {
                 if (comparisonC ==0)
                    {
                        //call function
                        final = fahrenheit(quantity1);
                        //switch the units
                        //print result
                        printf("%lf F\n",final);
                    }
               }
            comparisonkg = strncmp(unit, kg,2);
                {
                        if (comparisonkg == 0)
                    {
                        //call function
                        final = pounds(quantity1);
                        //switch the units

                        //print result
                        printf("%lf lbs\n",final);
                    }
                }



        }

}
return 0;

}



double fahrenheit(double a)
    {
        int result;
        result = (a - 32) * .5555;
        return result;
    }

double pounds (double b)
    {
        int result;
        result = b * 2.205;
        return result;
    }

double miles (double c)
    {
        int result;
        result = c * .621371;
        return result;
    }

double inches (double d)
    {
        int result;
        result = d * .39307;
        return result;
    }