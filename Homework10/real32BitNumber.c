#include <stdio.h>
#include <stdint.h>

void showBits(int n){

    int i, k, andmask;
 
  for (i = 32; i >= 0;i--)
  {
    andmask = 1 << i;
    k = n & andmask;
    k == 0 ? printf ("0") : printf ("1");
  }
}

int main(){

    int input =0;
    scanf("%d", &input);
    showBits(input);

    return 0;
}