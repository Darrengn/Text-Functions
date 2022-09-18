#include <stdio.h>
#include <stdlib.h>

#include "const.h"

/**
 * splits a string in two, returns the first part of the string and
 * stores the second string in the return param. both are null terminated and
 * heap allocated
 * @param str the string to split, must be null terminated
 * @param ind the index to split at, this index is the first char of the second str
 * @param ret_str address to return the second string
 * @return a pointer to the first string
 */
char* split_str(char* str, int ind, char** ret_str) {
    int len = strLength(str);
    int i;
    int j;
    //check if ind is valid
    if (ind >= len || ind <= 0) {
        printf("invalid index on split_str");
        return NULL;
    }
    char *str1 = malloc((ind + 1) * sizeof(char));
    *ret_str = malloc((len - ind + 1) * sizeof(char));

    if(str == NULL || ret_str == NULL) {
        printf("alloc failed in split_str");
        return NULL;
    }

    for(i = 0; i < ind; i++){
        str1[i] = str[i];
    }
    str1[i] = '\0';
    for(i = ind, j = 0; i < len; i++, j++){
        (*ret_str)[j] = str[i];
    }
    (*ret_str)[j] = '\0';
    return str1;
}