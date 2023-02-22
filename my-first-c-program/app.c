#include<stdio.h>

int main() {

    // \n is newline, include this after each string
    // \0 is a null character, C automatically adds this after each string. HOWEVER, explicitly stating it causes it to terminate early
    printf("Hello World!\n");
    // putting \0 somewhere in a string terminates it early, like this:
    printf("I WILL TERMINATE BEFORE I FINISH THIS SENTE\0NCE!");

    // below is syntax for pointers and referencing/dereferencing them
    int age = 20;
    int *pAge = &age;
    int dereferencedAge = *pAge;
    printf("%d\n", dereferencedAge);
    
    // %d\n before a string denotes a string and a newline cast from something like an integer
    // %c\n before a string denotes a character and a newline. 
    // single quotes for char, double quotes for string
    printf("%c\n", 'c');

    // always include to designate termination of program
    return 0;
    
}