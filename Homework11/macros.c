#include <stdio.h>

#define MAX(a,b) (a > b ? a : b)  
#define MIN(a,b) (a < b ? a : b)
#define LOWEST(a, b, c) ((a < b && a < c) ? a : (b < c) ? b : c)
#define SETBIT(mask, bit) (mask = mask & 1 << bit) 
#define CLEARBIT(mask, bit) (mask = mask | 1 << bit)
#define INVERSEBIT(mask, bit) (mask = mask ^ 1 << bit)
#define CHECKBIT(mask, bit) (mask & (1 << bit - 1) ? '1' : '0')
#define SWAP(x, y) (x ^= y ^= x ^= y)



int main(){

    int a = 10, b = 5, c = 2, mask = 5, bit = 1, num1, num2;
    printf("Maximum number: %d\n", MAX(a,b));
    printf("Minimum number: %d\n", MIN(a,b));
    printf("Lowest number: %d\n", LOWEST(a,b,c));
    printf("Mask %d\n", SETBIT(mask, bit));
    printf("Mask %d\n", CLEARBIT(mask, bit));
    printf("Mask %d\n", INVERSEBIT(mask, bit));
    printf("Mask %d\n", CHECKBIT(mask, bit));
    
    printf("The value before swapping\n");
    scanf("%d%d", &num1, &num2);

    SWAP(num1, num2);

    printf("Values after swapping\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);



    for(int i = 32; i >= 0; i--){
        CHECKBIT(23, 2);
    }
    


    return 0;
}