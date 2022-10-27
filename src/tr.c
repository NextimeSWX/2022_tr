/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:40 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: tr
 */

#include <unistd.h>
#include <stdlib.h>
#include "stu.h"

int tr (char **b, char *buffer)
{
    int i;
    int nb;
    nb = 0;
    if (!buffer)
        return 0;
    while (b[1][nb] != '\0') {
        i = 0;
        while (buffer[i] != '\0') {
            if (buffer[i] == b[1][nb]) {
                buffer[i] = b[2][nb];
            }
            i = i + 1;
        }
        nb = nb + 1;
    }
    return (nb);
}
