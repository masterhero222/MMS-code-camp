#include <stdio.h>

unsigned char CheckBit(unsigned int uValue)
{
    while(uValue != 0)
    {
        if(uValue == 1)
        {
            return 1;
        }
        else if(uValue % 2 != 0)
        {
            return 0;
        }

        uValue >>= 1;
    }
}

int main()
{
    unsigned int a = 0x0400;
    unsigned int b = 0x0600;
    unsigned int c = 0x0000;

    printf("%x\n", CheckBit(a));
    printf("%x\n", CheckBit(b));
    printf("%x\n", CheckBit(c));

    return 0;