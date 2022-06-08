#include <stdio.h>
#include <string.h>

int strnlenn(const char* string, size_t maxlen){
    
    size_t i;
    for(i = 0; i < maxlen; i++){
        if(string[i] == '\0'){
            break;
        }
    }
    return i;

}


int main(){

    char str1[] = "Clutch Or Kick!";

    printf("%ld %ld\n", strnlenn(str1, 2000)); 

    return 0;
}