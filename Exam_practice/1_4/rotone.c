#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int ac, char *av[])
{
    int i = 0;
    if (ac != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    while (av[1][i])
    {
        if (av[1][i] == 'z')
            av[1][i] == 'a';
        else if (av[1][i] == 'Z')
            av[1][i] == 'A';
        else if (av[1][i] >= 'a' && av[1][i] < 'z' || av[1][i] >= 'A' && av[1][i] < 'Z')
            av[1][i] += 1;
        i++;
    }
    ft_putstr(av[1]);
    ft_putchar('\n');
    return 0;
}