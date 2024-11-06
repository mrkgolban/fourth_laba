#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int my_strlen(char* str)
{
    int s = 0;
    while (*(str + s) != '\0')
    {
        s += 1;
    }
    return s;
}

// int my_strstr(char* haystack, char* needle)
// {

// }

void my_strcpy(char *source, char* target)
{
    for (int i = 0; i < my_strlen(source); i++)
    {
        *target = *source;
    }
}

int my_strstr(char* haystack, char* needle)
{
    int i, j = 0;
    int res = -1;
    bool flag = false;
    for (int i = 0; i < my_strlen(haystack); i++)
    {
        if (*(haystack + i) == *(needle))
        {
        flag = true;
            for (int j = 0; j < my_strlen(needle); j++)
            {
                if (*(haystack + i + j) != *(needle + j))
                {
                    flag = false;
                }
            }
        }
        if (flag)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char* string = "abcdef123";
    char* string2 = "1";
    printf("%d\n", my_strlen(string));
    string2 = "123";
    printf("%s\n%s\n", string2, string);
    printf("%d\n", my_strstr(string, string2));
    
}
