unsigned int stu_strlen(const char *str)
{
    unsigned int t;
    t = 0;
    while(str[t] != '\0')
        {
            t = t + 1;
        }
    return(t);
}
