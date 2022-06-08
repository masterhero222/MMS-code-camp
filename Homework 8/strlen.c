#include <stdio.h>

int strlenn(char* string){
    size_t i = 0;
    size_t count;
    while(string[i] != '\0'){
        i++;
        count++;
    }

    return count;

}


int main(){

    char str1[] = "Clutch Or Kick!";

    printf("%ld", strlenn(str1)); 

    return 0;
}