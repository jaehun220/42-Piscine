#include <stdlib.h>

char    *ft_strdup(char *src){

    int i = 0;
    char *str;
    while (src[i])
        i++;
    str = (char *)malloc((i + 1) * sizeof(char));
    if (!src)
        return NULL;
    i = 0;
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return str;
}
#include <stdio.h>
int main(void){
    char *src = "Hello";
    char *dest = ft_strdup(src);
    printf("%s", dest);
    return 0;
}