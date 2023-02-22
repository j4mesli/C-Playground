#include <stdio.h>
#include <stdlib.h>
// include custom header file here
#include "main.h"

/* calculate the farenheit-celsius table */

/* without the use of custom header declarations */

// int main() {
//     int fahr, celsius; 
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;
//     while (fahr <= upper) {
//         celsius = (5*(fahr-32))/9;
//         // ("%d\t%d\n", fahr, celsius) means ("first el = m.n digits wide, \tab, second el = m.n digits wide, \newline", )
//         printf("%3.5d \t %3.5d\n", fahr, celsius);
//         fahr = fahr+step;
//     }

//     return 0;
// }

/* with the use of custom header declarations */

int main() {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        // needs to be 5.0/9.0 and %6.1f because we are displaying a float with 6.1 digits of space
        printf("%3d %6.1f\n", fahr, ((5.0/9.0)*(fahr-32)));

    return 0;
}