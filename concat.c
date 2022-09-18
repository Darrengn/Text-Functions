#include <stdio.h>
#include <stdlib.h>
#include "const.h"

/**
 * concatenates s1 and s2, both s1 and s2 must be null terminated 
 * @param s1 the first string
 * @param s2 the second string
 * @return memory allocated string
 */
char* concatNull(char* s1, char* s2) {
    int len1 = strLength(s1);
    int len2 = strLength(s2);
    return concat(s1, s2, len1, len2);
}

/**
 * concatenates s1 and s2, doesn't need to be null terminated
 */ 
char* concat(char* s1, char* s2, int len1, int len2) {
    char* str = malloc((len1 + len2 + 1) * sizeof(char));
    int i;
    for(i = 0; i < len1; i++){
        str[i] = s1[i];
    }
    for(i = 0; i < len2; i++){
        str[i + len1] = s2[i];
    }
    str[i + len1] = '\0';
    return str;
}