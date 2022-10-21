#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main (int a, char **b)
{
    int i = 0;
    int nb = 0;
    int nb1 = 1;
    int nb2 = 1;
    **b = 0
    char *buffer = malloc(sizeof(char) * 10);
    int size_read = read(0, buffer, 10);
    buffer[size_read] = '\0';
    if (!buffer)
        return 0;
    if (size_read == -1)
        return 0;
    while (nb != size_read)
        {
            while (buffer[i] != '\0')
                {
                    if (buffer[i] == *b[nb1])
                        {
                            buffer[i] = *b[nb2];
                        }
                    write (1, &buffer[i], 1);
                    i = i + 1;
                }
            nb = nb + 1;
        }
    free(buffer);
    return a;
}
