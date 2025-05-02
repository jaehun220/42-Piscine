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

int main(int argc, char *argv[]){
    int i = 0;
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' &&argv[1][i]<='m')
        {
            argv[1][i] += 13;
        }  
        else if (argv[1][i] >= 'A' &&argv[1][i]<='M')
        {
            argv[1][i] += 13;
        }
        else if (argv[1][i] >= 'n' &&argv[1][i]<='z')
        {
            argv[1][i] -= 13;
        }
        else if (argv[1][i] >= 'N' &&argv[1][i]<='Z')
        {
            argv[1][i] -= 13;
        }
        i++;  
    }
    ft_putstr(argv[1]);
    ft_putchar('\n');
    return 0;
}