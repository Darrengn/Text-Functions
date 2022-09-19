#include <stdio.h>
#include <stdlib.h>
#include "const.h"

/**
 * checks if two strings are equal
 * @param str1 the first string
 * @param str2 the second string
 * @return 1 if equal 0 if not
 */
int equals(char* str1, char* str2) {
    int len1 = strLength(str1);
    if(len1 != strLength(str2)){
        return 0;
    }
    int i;
    for (i = 0; i < len1; i++) {
        if(str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}