#include <stdio.h>


void reserve (char*);
unsigned int my_str(const char);

unsigned int my_strlen(const char *str)
{
    unsigned int count = 0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}

void reverse(char* str) {
   
   int i, j;
   unsigned char a;

   for( ){
      a = str[i];
      str[i] = str[j];
      str[j] = a;
   }

   printf("%s", &a);



 }


 int main(){

   char name [] = "Pedro";

   reverse(name);

    
    return 0;
 }