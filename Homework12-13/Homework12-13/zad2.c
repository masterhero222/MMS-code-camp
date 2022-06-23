#include <stdio.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int m_strlen(char *ptr)
{
    int cnt = 0;
    while (*ptr)
    {
        ptr++;
        cnt++;
    }

    return cnt;
}

void Reverse(char *ptr)
{
    int n = m_strlen(ptr);

    for (int i = 0; i < n / 2; i++)
    {
        swap(ptr + i, ptr + (n - 1 - i));
    }
}

int main()
{
    char str[20] = "This is a test";
    Reverse(str);
    printf("%s\n", str);

    return 0;
}