/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:36 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: main
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

int main(int a, char ** b)
{
    int size_read;

    size_read = 0;

    char * buffer = malloc(sizeof(char)*10);
    size_read = read(0, buffer, 9);
    buffer[size_read] = '\0';
    tr(b, buffer);
    stu_puts(buffer);
    free(buffer);
    return a;
}
