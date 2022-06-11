#include <stdio.h>
#include <stdint.h>


int swapBits(unsigned int x, unsigned int p1, unsigned int p2, unsigned int n){
 unsigned int set1 = (x >> p1) & ((1U << n) - 1);
 
    unsigned int set2 = (x >> p2) & ((1U << n) - 1);
 
    unsigned int xor = (set1 ^ set2);
 
    xor = (xor << p1) | (xor << p2);
 
   
    unsigned int result = x ^ xor;
 
    return result;
}

int showBits(int n){
    int i, k, andmask;

    //show bits
    for(i = 16; i >= 0; i--){
        andmask = 1 << i;
        k = n & andmask;
        return k;
    }

}


int main(){

    printf("%d",swapBits(5, 1, 2, 3) );

    

    return 0;
}