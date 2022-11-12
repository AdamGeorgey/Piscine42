#include    <unistd.h>
#include    <limits.h>

void        ft_is_negative(int n)
{
    if (n > INT_MAX || n < INT_MIN)
    {
        write(2, "Entrez un Int", 13);
        return ;
    }
    if (n < 0)
    {
        write(1, "N", 1);
    }
    else
        write(1, "P", 1);
}
