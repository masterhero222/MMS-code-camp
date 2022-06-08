#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//С тази задача се изтормозих много и повечето работи ги взех от гугъл (99.9% :) )

char* my_strcat(char* destination, const char* source)
{

    char* ptr = destination + strlen(destination);
 

    while (*source != '\0') {
        *ptr++ = *source++;
    }
 

    *ptr = '\0';
 

    return destination;
}
 



int main(){


    char* str = (char*)calloc(100, 1);
 
    my_strcat(str, "Got ");
    my_strcat(str, "A ");
    my_strcat(str, "New ");
    my_strcat(str, "Vibe ");
    my_strcat(str, "Who ");
    my_strcat(str, "This ");
    my_strcat(str, "?");
 
    puts(str);
 
    return 0;

    return 0;
}