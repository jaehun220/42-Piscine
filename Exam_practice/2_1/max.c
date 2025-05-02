int	ft_strcmp(int s1, int s2)
{
	int	i;

	i = 0;
	if (s1 < s2)
		return (-1);
	else if (s1 > s2)
		return (1);
	
	return (0);
}
int max(int *tab, unsigned int len)
{
    unsigned int i = 1;
    int result = tab[0];
    while (i < len)
    {
        if (ft_strcmp(tab[i], tab[i - 1]) > 0)
            result = tab[i];
        i++;
    }    
    return result;
}

#include <stdio.h>
int main(void)
{
    int a[10] = {1,2,3,4,5};
    int b = max(a, 5);
    printf("%d", b);
    return 0;
}