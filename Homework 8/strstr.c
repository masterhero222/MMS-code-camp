#include <stdio.h>
 

int compare(const char *X, const char *Y)
{
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
 
        X++;
        Y++;
    }
 
    return (*Y == '\0');
}
 
const char* strstr(const char* X, const char* Y)
{
    while (*X != '\0')
    {
        if ((*X == *Y) && compare(X, Y)) {
            return X;
        }
        X++;
    }
 
    return NULL;
}
 

int main()
{
    char *X = "The drank russian rushed B and died";
    char *Y = "Ace";
 
    printf("%s\n", strstr(X, Y));
 
    return 0;
}