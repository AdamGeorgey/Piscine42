#include    <unistd.h>
#include    <stdio.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

void        ft_puttab(int tab[], int n)
{
    int     i;
    
    i = 0;
    while (i < n - 1)
    {
        tab[i] = 0;
        ft_putnbr(tab[i++]);
    }
    tab[i] = 1;
    ft_putnbr(tab[i]);
    tab[++i] = 0;
    ft_putnbr(tab[i]);
}

void        ft_print_combn(int n)
{
    int     tab[n];
    int     i;
    int     j;
    
    i = 0;
    j = n - 1;
    while (tab[0] < 10 - n)
    {
        while (tab[j] < 10 - n - j)
        {
            ft_puttab(tab, n);
            tab[j]++;
        }
    }
}

int         main()
{
    int     tab[9];
    
    ft_puttab(tab, 9);
    return (0);
}