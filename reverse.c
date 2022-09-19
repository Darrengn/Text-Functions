#include <stdio.h>
#include <stdlib.h>
#include "const.h"

/**
 * returns heap allocated string of the parameter reversed
 * @param str the string to reverse
 * @return a pointer to the reversed string
 */
char* reverse(char* str) {
    int len = strLength(str);
    char *ret = malloc((len + 1) * sizeof(char));
    int i;
    for (i = 0; i < len; i++) {
        ret[i] = str[len - i - 1];
    }
    ret[len] = '\0';
    return ret;
}