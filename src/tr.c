#include <unistd.h>
#include <stdlib.h>
#include "stu.h"

//int stu_puts(const char *str);
//unsigned int stu_strlen(const char *str);

int tr(char **b, char *buffer)
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
    return nb;
}
