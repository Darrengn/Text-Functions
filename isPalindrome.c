#include <stdio.h>
#include <stdlib.h>
#include "const.h"

/**
 * checks if a string is a palindrome
 * @param the string to check
 * @return 1 if the string is a palindrome 0 if it isn't
 */
int isPalindrome(char* str) {
    return equals(str, reverse(str));
}