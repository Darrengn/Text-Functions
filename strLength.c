#include <stdio.h>
#include <stdlib.h>

#include "const.h"

/**
 * returns the number of characters in the parameter string
 * @param str the string to get the length of
 * @return an int of the length;
 */
int strLength(char* str) {
    int i;
    int len = 0;
    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}