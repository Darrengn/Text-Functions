#include <stdio.h>
#include <stdlib.h>
#include "const.h"

/**
 * counts the amount of times that fstr appears in sstr
 * doesn't count overlapping instances
 * @param fstr find string, the string to search for
 * @param sstr search string, the string that is looked through
 * @param startInd the index to start at (inclusive)
 * @param endInd the index to end at (exclusive)
 * @return the number of intances of fstr in sstr
 */
int instancesOf(char* fstr, char* sstr, int startInd, int endInd) {
    int fstrLen = strLength(fstr);
    int sstrLen = strLength(sstr);
    int i;
    int cnt = 0;
    //check for valid index
    if(startInd >= endInd || startInd < 0 || startInd >= sstrLen || 
        endInd < 1 || endInd > sstrLen || fstr == NULL || sstr == NULL) 
    {    
        printf("invalid parameters in instancesOf");
        return -1;
    }

    for(i = 0; i < endInd; i++) {
        if(indexOf(fstr, sstr, i, endInd) == -1) {
            break;
        }
        i += fstrLen - 1;
        cnt++;
    }
    return cnt;
}