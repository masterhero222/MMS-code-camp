#include <stdio.h>

void Conv(int sValue, char *pBuffer)
{
    if(sValue >= 0)
    {
        pBuffer[0] = ' ';
    }
    else
    {
        pBuffer[0] = '-';
        sValue = - sValue;
    }

    for (int i = 5; i >= 1; i--)
    {
        pBuffer[i] = sValue % 10 + '0';
        sValue /= 10;
    }

    pBuffer[6] = '\0';
}

int main()
{
    char pBuffer[7];
    Conv(-32111, pBuffer);
    printf("%s\n", pBuffer);
    return 0;
}