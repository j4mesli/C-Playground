#include <stdio.h>

// counting characters, lines, and words

/* WORD COUNTING */

// int main() {
//     // NOTICE THIS INCREMENTS BY TWO, BECAUSE C ADDS THE NULL CHARACTER BEHIND ALL CHARACTERS TO TERMINATE THEM

//     /* method 1: syntax heavy */
//     // same as in Java
//     // // long count = 0;
//     // while (getchar() != EOF) {
//     //     ++count;
//     // }
//     // // below is prints a long in proper format from printf 
//     // printf("%ld\n", count);

//     /* method 2: syntax light */
//     // same as in Java
//     double count;
//     for (count = 0; getchar() != EOF; ++count) {
//         ; // do nothing
//     }
//     printf("%0.0f\n", count);

//     return 0;
// }

/* LINE COUNTING */
int main() {
    /* count just newline characters */

    // int _char, lines;

    // lines = 0;
    // while ((_char = getchar()) != EOF)
    //     if (_char =='\n') 
    //         lines++;
    // printf("%d\n", lines);

    /* count blanks, tabs, and newlines */

    // int _char, count;
    // count = 0;
    // while ((_char = getchar()) != EOF) {
    //     if (_char == '\n') count++;
    //     if (_char == '\t') count++;
    //     if (_char == ' ') count++;
    // }
    // printf("%d\n", count);

    // return 0;

    /* replace all strings of whitespace with one space */

    // int _char, prev;

    // while ((_char = getchar()) != EOF) {
    //     if (_char == ' ') {
    //         if (prev != ' ') putchar(_char);
    //     }
    //     else {
    //         putchar(_char);
    //     }
    //     prev = _char;
    // }
    // putchar(_char);

    // return 0;

    /* replace each tab with \t, each backspace with \b, each backslash by \\ */

    int _char, prev;

    while ((_char = getchar()) != EOF) {
        if (_char == '\t') putchar('\t');
        else if (_char == '\b') putchar('\b');
        else if (_char == '\\') putchar('\\');
        else putchar(_char);
        prev = _char;
    }

    return 0;
}

/* WORD COUNTING */
// int main() {




//     return 0;
// }