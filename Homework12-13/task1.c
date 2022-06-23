#include <stdio.h>


unsigned char CheckBit(unsigned int uValue);

int main(){

    int mask = 16;

    printf("%d\n",CheckBit(mask));


    return 0;
}

unsigned char CheckBit(unsigned int mask){

    for(int i = 16; i >= 0; i--){


        if (mask & (1 << (i - 1)))
        return '1';
    else
        return '0';


    }


}