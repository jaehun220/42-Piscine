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

int isin(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;        
    }
    return 0;    
}

int main(int argc, char *argv[])
{
    char result[1024];
    
    if (argc != 3)
    {
        ft_putchar('\n');
        return 0;
    }
    int i = 0;
    int arr_i = 0;
    while(argv[1][i])
    {
        if (!isin(result, argv[1][i]))
        {
            result[arr_i] = argv[1][i];
            arr_i++;
        }
        i++;
    }
    i = 0;
    while(argv[2][i])
    {
        if (!isin(result, argv[2][i]))
        {
            result[arr_i] = argv[2][i];
            arr_i++;
        }
        i++;
    }
    result[arr_i] = '\0';
    ft_putstr(result);
    ft_putchar('\n');
    return 0;
}