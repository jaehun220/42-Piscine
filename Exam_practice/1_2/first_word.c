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
    while (argv[1][i] && argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        ft_putchar(argv[1][i]);
        i++;  
    }    
    ft_putchar('\n');    
}