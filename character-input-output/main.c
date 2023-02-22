#include <stdio.h>

// input/output of a single character

int main() {
    int _char;

    /* method 1: declaration heavy */

    // // getchar intakes a single character from a user input
    // _char = getchar();
    // // EOF means end of function, basically Ctrl+C
    // while (_char != EOF) {
    //     // putchar outputs the single character intaken to the console
    //     putchar(_char);
    //     _char = getchar();
    // }

    /* method 2: tight declaration */

    while ((_char = getchar()) != EOF) /* means while \exists an input in the system */ 
        putchar(_char);

    // printing value of EOF (it's -1)
    printf("%d\n", EOF);

    return 0;
}