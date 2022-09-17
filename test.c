#include <stdio.h>
#include <stdlib.h>
#include "const.h"

/**
 * This is only to test the functions, the functions can be copied into 
 * other projects for use.
 * usage argv[1] is input file, argv[2] is output, default is console
 */
int main(int argc, char **argv) {
    
    switch (argc) {
    case 1:
        in_file = fopen(*(argv + 1), "r");
        out_file = stdout;
        break;
    case 2:
        in_file = fopen(*(argv + 1), "r");
        out_file = fopen(*(argv + 2), "w");
    default:
        in_file = stdin;
        out_file = stdout;
        break;
    }
    //call function here
    
}