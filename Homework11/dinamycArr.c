
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int input;
    scanf("%d", &input);


    int* arrNums = malloc(input * sizeof(int));

    if (NULL == arrNums){
        fprintf(stderr, "Malloc error\n");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < input; i++){
        arrNums[i] = rand() % 10;
    }

    int input2;
    scanf("%d", &input2);
    arrNums = realloc(arrNums, sizeof(int) * (input + input2));

    if (NULL == arrNums){
        fprintf(stderr, "Realloc error\n");
        return EXIT_FAILURE;
    }

    for (int i = input; i < input + input2; i++){
        arrNums[i] = 10 + rand() % 10;
    }

    int input3;
    scanf("%d", &input3);
    arrNums = realloc(arrNums, sizeof(int) * (input + input2 + input3));

    if (NULL == arrNums){
        fprintf(stderr, "Realloc error\n");
        return EXIT_FAILURE;
    }

    for (int i = input + input2; i < input + input2 + input3; i++){
        arrNums[i] = 20 + rand() % 10;
    }


    for (int i = 0; i < input + input2 + input3; i++){
        printf("%d ", arrNums[i]);
    }
    
    putchar('\n');
    free(arrNums);
    return 0;
}