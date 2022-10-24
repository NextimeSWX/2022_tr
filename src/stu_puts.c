#include <unistd.h>

unsigned int stu_strlen(const char *str);
int stu_puts(const char *str)
{

    int m;
    int nb;
    m = stu_strlen(str);
    nb = write(1, str, sizeof(char)*m);

    m = m + 1;
    return(nb);
}
