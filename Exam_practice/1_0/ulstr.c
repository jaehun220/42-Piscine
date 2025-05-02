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
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    int i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z' )
        {
            argv[1][i] -= 32;
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' )
        {
            argv[1][i] += 32;
        }        
        i++;
    }
    ft_putstr(argv[1]);
    return 0;
}