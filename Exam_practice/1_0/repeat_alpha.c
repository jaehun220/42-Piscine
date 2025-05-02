#include <unistd.h>

void make_alpha(char c)
{
    int i;
    int length;

    i = 0;
    if (c >= 'a' && c < 'z')
    {
        length = c - 96;
        while (i < length)
        {
            write(1, &c, 1);
            i++;
        }
    }
    if (c >= 'A' && c < 'Z')
    {
        length = c - 64;
        while (i < length)
        {
            write(1, &c, 1);
            i++;
        }
    }
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    j = 0;

    if (argc != 2)
        return 0;
    while (argv[i])
    {
        while (argv[i][j])
        {
            make_alpha(argv[i][j]);
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}