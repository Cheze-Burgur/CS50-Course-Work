#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int get_string(const char *message, char str[])
{
    printf("%s", message);

    if (fgets(str, MAX_LEN, stdin) == NULL)
    {
        return 0;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    return 1;
}

int main(void)
{
    char answer[MAX_LEN];

    if (get_string("What's your name? ", answer))
    {
        printf("Hello, %s\n", answer);
    }

    return 0;
}
