#include <unistd.h>
#include "stu.h"

int stu_puts(const char *str)
{
    int m;
    int nb;
    m = stu_strlen(str);
    nb = write(1, str, sizeof(char)*m);
    m = m + 1;
    return(nb);
}
