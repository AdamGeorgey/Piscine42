#include    <unistd.h>
#include    <stdio.h>

void        ft_putchar(char c)
{
    write(1, &c, 1);
}

void        ft_inittab(int tab[], int n)
{
    int     i;
    
    i = 0;
    while (i < n - 1)
        tab[i++] = 0;
    tab[i] = 1;
    tab[++i] = 0;
}

void        ft_puttab(int tab[], int n)
{
    int     i;
    
    i = 0;
    while (i < n)
        ft_putchar(tab[i++] + '0');
    if (tab[0] < 10 - n)
        write(1, ", ", 2);
}

void        ft_decale(int tab[], int n)
{
    int     i;
    int     j;
    
    i = n - 1;
    j = 10;
    while (tab[i] == j)
	{
		i--;
		j--;
	}
	tab[i]++;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}

}

void        ft_print_combn(int n)
{
    int     tab[n];
    int     i;
    int     j;
    
    i = 1;
    j = n - 1;
    ft_inittab(tab, n);
    while (tab[0] <= 10 - n)
    {
        if (tab[j] <= 10 - i)
        {
            ft_puttab(tab, n);
            tab[j]++;
        }
        else
            ft_decale(tab, n);
    }
}