#include <stdio.h>

void reverseBits(unsigned char *num)
{
    int bin[8];
    char decimal = *num;

    for (int i = 0; i < 8; i++, decimal /= 2)
    {
        bin[i] = decimal % 2;
    }

    unsigned char pow = 1;
    decimal = 0;

    for (int i = 7; i >= 0; i--, pow *= 2)
    {
        decimal += pow * bin[i];
    }

    *num = decimal;
}

void VMirror(unsigned char *pImage)
{
    for (int i = 0; i < 8; i++)
    {
        reverseBits(pImage + i);
    }
}

int main()
{
    char buffer[8] = {0x7F, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00};
    VMirror(buffer);

    for (int i = 0; i < 8; i++)
    {
        printf("%x ", buffer[i] & 0xff);
    }
    putchar('\n');
    return 0;
}