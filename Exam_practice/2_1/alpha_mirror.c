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
void alpha_mirror(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i]>='a' && str[i]<='z')
            ft_putchar('m' - (str[i] - 'n'));
        else if(str[i]>='A' && str[i]<='Z')
            ft_putchar('m' - (str[i] - 'n'));
        else
            ft_putchar(str[i]);
        i++;
    }
}
int main(int argc, char *argv[])
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    ft_putchar('\n');
    return 0;
}