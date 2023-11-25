#include "main.h"


/*decimal to binary*/
void dec_to_bin(int d)
{
    int result[8];
    int i = 0;
    /*convert decimal to binary*/
    while (d != 0)
    {
        result[i] = d % 2;
        d /= 2;
        i++;
    }
    /*print arrays elements in reverse order*/
    if (i > 0)
    {
        int j;
        for(j = i - 1; j >= 0; j--)
        {
            printf("%d", result[j]);
        }
        printf("\n");
    }
    else
    {
        printf("0\n");
    }
}