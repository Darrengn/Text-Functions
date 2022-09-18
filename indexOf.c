#include <stdio.h>
#include <stdlib.h>
#include "const.h"

/**
 * finds the first instance of fstr in sstr and returns the index of the
 * first character
 * @param fstr find string, the string to search for
 * @param sstr search string, the string that is looked through
 * @param startInd the index to start at (inclusive)
 * @param endInd the index to end at (exclusive)
 */
int indexOf(char* fstr, char* sstr, int startInd, int endInd) {
    int fstrLen = strLength(fstr);
    int sstrLen = strLength(sstr);
    int i;
    int j;
    //check for valid parameters
    if(startInd >= endInd || startInd < 0 || startInd >= sstrLen || 
        endInd < 1 || endInd >= sstrLen || fstr == NULL || sstr == NULL) 
    {    
        printf("invalid parameters");
        return -1;
    }
    //loop to search for the first char of fstr
    for(i = startInd; i < endInd; i++) {
        if(fstr[0] == sstr[i]) {
            //loop to check if next chars are correct
            for(j = 1; j < fstrLen; j++) {
                if(fstr[j] != sstr[i + j]) {
                    break;
                }
            }
            if(j == fstrLen) {
                return i;
            }
        }
    }
    return -1;
}