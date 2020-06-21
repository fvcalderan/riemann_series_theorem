/* Author: Felipe V. Calderan
* Copyright: Copyright (C) 2020 Felipe V. Calderan
* License: BSD 3-Clause "New" or "Revised" License
* Version: 1.0 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (int argc, char *argv[])
{
    /* check args */
    if (argc < 3) {
        printf("Usage: ./rst value precision\n");
        printf("Example: ./rst 3.1415926536 0.001\n");
        exit(0);
    }

    double wish_value = strtod(argv[1], NULL);
    double precision = strtod(argv[2], NULL);
    double value = 0.0;
    unsigned int pos_num = 0;
    unsigned int neg_num = 1;
    char aux[100];

    /* output string variable */
    char *megasum;
    megasum = malloc (10000000*sizeof(char));
    strcpy(megasum, "");

    /* while the precision wasn't reached */
    while(fabs(value - wish_value) > precision)
    {
        /* value should increase */
        while (value < wish_value)
        {
            value += ((double)1/(double)(pos_num*2.0+1.0));
            sprintf(aux, "+1/%d", pos_num*2+1);
            strcat(megasum, aux);
            pos_num++;
        }
        /* value should decrease */
        while (value > wish_value)
        {
            value -= ((double)1/(double)(neg_num*2.0));
            sprintf(aux, "-1/%d", neg_num*2);
            strcat(megasum, aux);
            neg_num++;
        }
    }

    /* print output string variable */
    printf("%s", megasum);
    free(megasum);
    return 0;
}
