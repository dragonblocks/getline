#ifndef _GETLINE_H_
#define _GETLINE_H_

#include_next <stdio.h>
#include <stdint.h>

// if typedef doesn't exist (msvc, blah)
typedef intptr_t ssize_t;

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif // _GETLINE_H_
