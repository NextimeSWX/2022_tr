#ifndef STU_H_
#define STU_H_
unsigned int stu_strlen(const char *str)
{
    unsigned int t;
    t = 0;
    while(str[t] != '\0')
        {
            t = t + 1;
        }
    return (t);
}
int stu_puts(const char *str)
{
    int m;
    int nb;
    m = stu_strlen(str);
    nb = write(1, str, sizeof(char)*m);
    m = m + 1;
    return(nb);
}
#endif
