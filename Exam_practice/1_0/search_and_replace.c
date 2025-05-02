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

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        ft_putchar('\n');
        return 0;
    }
        

    int i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == argv[2][0])
            ft_putchar(argv[3][0]);
        else
            ft_putchar(argv[1][i]);
        i++;
    }
    ft_putchar('\n');
    return 0;
}