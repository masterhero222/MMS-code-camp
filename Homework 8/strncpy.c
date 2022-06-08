#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * strncpyy(char *dest, const char *src, size_t n){
    
    for(int i = 0; i < n && src[i] != '\0'; i++){
        dest[i] = src[i];
    }

    
}

int main(){

    char* str = (char*)calloc(100, 1);
 
    my_strcat(str, "Techie ");
    my_strcat(str, "Delight ");
    my_strcat(str, "– ");
    my_strcat(str, "Ace ");
    my_strcat(str, "the ");
    my_strcat(str, "Technical ");
    my_strcat(str, "Interviews");
 
    puts(str);

    return 0;
}