#include <unistd.h>
#include <stdlib.h>
#include "stu.h"

//int stu_puts(const char *str);
//unsigned int stu_strlen(const char *str);

int tr(int a, char **b)
{
    int i;
    int nb;
    nb = 0;
    **b = 0;
    buffer[size_read] = '\0';
    if (!buffer || size_read == -1)
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
    stu_puts(buffer);
    free(buffer);
    return a;
}
