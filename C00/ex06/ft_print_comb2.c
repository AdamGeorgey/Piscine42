#include    <unistd.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_putcomb(int i)
{
    int     premier;
    int     second;
    
    if (i > 9)
    {
        premier = (i / 10) + '0';
        second = (i % 10) + '0';
    }
    else
    {
        premier = '0';
        second = i + '0';
    }
    ft_putchar(premier);
    ft_putchar(second);
}

void        ft_print_comb2(void)
{
    int     a;
    int     b;
    
    a = 0;
    b = 1;
    while (a < 98)
    {
        while(b <= 99)
        {
            ft_putcomb(a);
            ft_putchar(' ');
            ft_putcomb(b);
            write(1, ", ", 2);
            b++;
        }
        b = ++a + 1;
    }
    ft_putcomb(a);
    ft_putchar(' ');
    ft_putcomb(b);
}

int     main()
{
    ft_print_comb2();
    return (0);
}