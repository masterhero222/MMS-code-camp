#include <stdio.h>
#include <stdint.h>


int checkBit(uint64_t mask, unsigned bit){

    return (mask & (1ULL << bit )) >> bit;

}


unsigned onesCount(uint64_t mask1, uint32_t mask2, uint16_t mask3, uint8_t mask4){

    unsigned count = 0;

    for(int bit = 0; bit < sizeof(uint64_t) * __CHAR_BIT__; bit++){
    count += checkBit(mask1, bit);

}

    for(int bit = 0; bit < sizeof(uint32_t) * __CHAR_BIT__; bit++){
    count += checkBit(mask2, bit);
}

    for(int bit = 0; bit < sizeof(uint16_t) * __CHAR_BIT__; bit++){
    count += checkBit(mask3, bit);
}

    for(int bit = 0; bit < sizeof(uint8_t) * __CHAR_BIT__; bit++){
    count += checkBit(mask4, bit);
}


}
    

void flipOddBits(uint64_t *mask){

    int bitFlip = 0;
    
    for(int bit = 0; bit < sizeof(uint64_t) * __CHAR_BIT__; bit++){
        
        
            

        

    }
    printf("%d\n", bitFlip);
}


int main(){

   
    unsigned long int mask = 0;
    int bit = 0;

    printf("input mask\n");
    scanf("%i", &mask);

    printf("\n");

    printf("input bit\n");
    scanf("%d", &bit);

    printf("\n");

    printf("%d\n\n",checkBit(mask, 1));
    printf("%i\n\n", onesCount(64, 64, 64, 64));
    flipOddBits(mask);
    

    return 0;
}
