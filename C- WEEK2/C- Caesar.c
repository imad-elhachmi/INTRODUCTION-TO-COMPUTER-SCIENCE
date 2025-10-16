#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
int only_digits(string argv);
char rotate(char c, int n);

int main(int argc, string argv[])
{

    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage:./caesar key\n");
        return (1);
    }

int key = atoi(argv[1]);
string text = get_string("plaintext: ");

int i = 0;
while (text[i] != '\0')
{
       text[i] = rotate(text[i], key);
    i++;
}

printf("ciphertext: %s\n", text);
}

int only_digits(string argv)
{
    int i = 0;
    while (argv[i] != '\0')
    {
        if (!(argv[i] >= '0' && argv[i] <= '9'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}


    char rotate(char c, int n)
{
    if (c>= 'A' && c <= 'Z')
    {
        return ((c - 'A' + n) % 26) + 'A';
}
    else if (c>= 'a' && c <= 'z')
    {
        return ((c - 'a' + n) % 26) + 'a';
}
    else
    {
        return c;
}
}


