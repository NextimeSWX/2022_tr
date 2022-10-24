#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int i;
int nb;
int main(int a, char **b)
{
    nb = 0;
    **b = 0;
    char *buffer = malloc(sizeof(char) * 10);
    int size_read = read(0, buffer, 10);
    buffer[size_read] = '\0';
    if (!buffer || size_read == -1)
        return 0;
    while (b[1][nb] != '\0') {
        i = 0;
        while (buffer[i] != '\0') {
            if (buffer[i] == b[1][nb]) {
                buffer[i] = b[2][nb];
            }
            write(1, &buffer[i], 1);
            i = i + 1;
        }
        nb = nb + 1;
    }
    free(buffer);
    return a;
}
