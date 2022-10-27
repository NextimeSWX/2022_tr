#include <unistd.h>
#include <stdlib.h>
#include "stu.h"

unsigned int stu_strlen(const char *str);

int main(int a, char ** b)
{
    int size_read;

    size_read = 0;

    char * buffer = malloc(sizeof(char)*10);
    size_read = read(0, buffer, 9);
    buffer[size_read] = '\0';
    tr(b,buffer);
    stu_puts(buffer);
    free(buffer);
    return a;
}
