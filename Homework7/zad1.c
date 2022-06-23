#include <stdio.h>

int secondMax(const int*, size_t, int*);

int main(){
    int sm;
    int arr[] = {12, 34, 5, 70, 46};
    if(secondMax(arr, 5, &sm)){
        printf("%d\n", sm);
    }
    
    int arr1[] = {2};
    secondMax(arr1, 1, &sm);

    int arr2[] = {};
    secondMax(arr2, 0, &sm);

    int arr3[] = {1, 1, 1, 1};
    secondMax(arr3, 4, &sm);

    return 0;
}

int secondMax(const int* arr, size_t n, int* secondMax){
    int firstmax = *arr; //zadavam purviqt max el da e purviq el v masiva
    *secondMax = *(arr + 1); //vtoriqt max da e vtoriq element v masiva

    if(n == 0){
        fprintf(stderr, "Array has zero elements!\n");
        return -1; //masivut da nqma elementi
    }else if(n == 1){
        fprintf(stderr, "Array has only 1 element!\n");
        return -2;
    }

    for(int i=1; i < n; i++){
        if(*(arr + i) > firstmax){
            *secondMax = firstmax; // za da moje vinagi firstmax da e po-golqm
            firstmax = *(arr + i);
        }else if(*(arr + i) > *secondMax){
            *secondMax = *(arr + i);
        }
    }
    if(firstmax == *secondMax){
        fprintf(stderr, "First max el is equal with second\n");
        return -3;
    }
    return *secondMax;
}