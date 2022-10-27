/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:39 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu_puts
 */

#include <unistd.h>
#include "stu.h"

int stu_puts (const char *str)
{
    int m;
    int nb;
    
    m = stu_strlen(str);
    nb = write(1, str, sizeof(char)*m);
    m = m + 1;
    return (nb);
}
