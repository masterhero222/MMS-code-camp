#include <stdio.h>
#include <string.h>

char* strcpyy(char *dest,const char *src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }


}

int main(){
    char str1[] = "TERMINATOR\0";
    char str2[20];

    strcpyy(str2, str1);
    printf("%s", str2);
    return 0;
}