#include <stdio.h>
#include <stdarg.h>

unsigned bitsNCount(unsigned count, unsigned bitscnt, ...);
unsigned long chekBits(int mask);

int main()
{
    unsigned n;
    n = bitsNCount(2, 2, 0x0a, 0xf2);
    printf("%u\n", n);
    n = bitsNCount(4, 8, 3, 0x13f1, 0xc, 034);
    printf("%u\n", n);
    return 0;
}

unsigned bitsNCount(unsigned count, unsigned bitscnt, ...)
{
    unsigned countMasks = 0;

    va_list argl;
    va_start(argl, bitscnt);
    for(int i = 0; i < count; i++)
    {
        int currentMask = va_arg(argl, int);
        int bits = chekBits(currentMask);
        if(bits == bitscnt)
        {
            countMasks++;
        }
    }

    return countMasks;
}

unsigned long chekBits(int mask)
{
    unsigned long count = 0;

    for(unsigned long i = 0; i < sizeof(mask)*__CHAR_BIT__; i++)
    {
        int check = !!((1<<i)&mask);
        if(check == 1)
        {
            count++;
        }
    }
    return count;
}