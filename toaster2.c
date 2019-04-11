#include <stdio.h>
#include <string.h>

int integersize (int x);
int charactersize (int x);
int doublesize (int x);
int shortsize (int x);
int kilobyte (int t);
int megabyte (int t);


int main(void)
{
    char word[2];
    int quantity, final;
    double fine;

        scanf("%s", &word);
        scanf("%d", &quantity);

                for(int i=0; i<strlen(word);i++)
                    {       
                        if (word[i] == 'c' || word[i] == 'C')
                        {
                            final = charactersize(quantity);
                        }

                        if (word[i]== 'd' || word[i] == 'D')
                        {
                            final = doublesize(quantity);
                        }

                        if (word[i]=='i' || word[i] == 'I')
                        {
                            final = integersize(quantity);  
                        }

                        if (word[i]=='s' || word[i]=='S')
                        {
                            final = shortsize(quantity);
                        }

                    }
                         if (final >= 1000 && final < 1000000)
                            { 
                               fine= kilobyte(final);
                                printf("%.1lf Kb", fine);
                            }
                        if (final > 1000000)
                             {
                                fine =megabyte(final);
                                printf("%.1lf Mb",fine);
                            }  
                        else if (final <1000)
                            {
                                printf("%d bytes",final);
                            }

    return 0;
}

int integersize (int x)
    {
        int result;
        return result = (sizeof(int)*x);
    }

int charactersize (int x)
    {
        int result;
        return result = (sizeof(char)*x);
    }

int doublesize (int x)
    {   
        int result;
        return result = (sizeof(double)*x);
    }

int shortsize (int x)
    {
        int result;
        return result = (sizeof(short)*x);
    }
int kilobyte (int t)
    {
        double result;
        return result = (t/1000);
    }
int megabyte (int t)
    {
        double result;
        return result =(t/1000000);

    }