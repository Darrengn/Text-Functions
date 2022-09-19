#include <stdio.h>
#include <stdlib.h>

#ifndef _CONST_H
#define _CONST_H


char* concatNull(char* s1, char* s2);
char* concat(char*, char*, int, int);

char* split_str(char*, int, char**);

int strLength(char*);

int indexOf(char*, char*, int, int);

int instancesOf(char*, char*, int, int);

char* reverse(char*);

#endif
