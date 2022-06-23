#include <stdio.h>

unsigned sumArrayDigits(const int*, size_t);

int main(){
    int arr[] = {3, 3434, 53, 12};
    printf("Sum is:%u\n", sumArrayDigits(arr, 4));
}

unsigned sumArrayDigits(const int* arr, size_t n){
    unsigned sum = 0;
    int j;
    for(int i=0; i<n; i++){
        j = (*(arr + i));
        for(;j>0; j/=10){
            sum += j % 10;
        }
    }
    return sum;
}

