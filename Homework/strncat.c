#include <stdio.h>
#include <stddef.h>
 

char* strncpy(char* destination, const char* source, size_t num)
{
    
    if (destination == NULL) {
        return NULL;
    }
 
    char* ptr = destination;
 
    while (*source && num--)
    {
        *destination = *source;
        destination++;
        source++;
    }
 
    *destination = '\0';
 
    return ptr;
}
 
int main(void)
{
    char* source = "Rasengan!";
    char destination[20];
 
    size_t num = 6;
 
    printf("%s", strncpy(destination, source, num));
 
    return 0;
}