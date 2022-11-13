#include    <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_putstr_comb(char *s)
{
    while (*s)
        ft_putchar(*s++);
    write(1, ", ", 2);
}

void        ft_print_comb(void)
{
    char s[4];
    
    s[0] = '0';
    s[1] = '1';
    s[2] = '2';
    s[3] = '\0';
    while (s[0] < '7')
    {
        while (s[1] < '8')
        {
            while (s[2] < '9')
            {
                ft_putstr_comb(s);
                s[2]++;
            }
            s[2] = ++s[1] + 1;
        }
        s[1] = ++s[0];
    }
    write(1, "789", 3);
}