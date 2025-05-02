

int ft_atoi(const char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        if (sign == -1)
        {
            sign = 0;
        }
        
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += (str[i] - '0');
        i++;
    }
    return (sign*result);    
}

#include <stdio.h>
int main(void)
{
    char *str = "   ---+--+a1234ab567";
    int result = ft_atoi(str);
    printf("%d\n", result);
    return 0;
}