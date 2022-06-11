#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//#define  COUNT[];

struct Book
{
    
    char title[150];
    char author[100];
    int pages;
    double price;
};

char* randomName(char*);
double doubleRand(double, double);
int randint(int,int);




void randomBooks(char* title, char* author, int* pages, double price){

    int maxTitle = 150;
    int minTitle = 10;
    int maxAuthor = 20;
    int minAuthor = 10;
    int minPages = 5;
    int maxPages = 2000;
    double minPrice = 1;
    double maxPrice = 70;

    title = randomName(title);
    author = randomName(author);
    *pages = randint(minPages, maxPages);
    price = doubleRand(minPrice, maxPrice);

}

char* randomName(char* name){
    // [A-Z][a-z]{5,10} [A-Z][a-z]{5,10}
    // Stanislav Ivanov 
    unsigned index = 0;
    name[index++] = randint('A', 'Z');
    int n = randint(5, 10);
    for (int i = 0; i < n; i++){
        name[index++] = randint('a', 'z');
    }
    name[index++] = ' ';
    n = randint(5, 10);
    name[index++] = randint('A', 'Z');
    for (int i = 0; i < n; i++){
        name[index++] = randint('a', 'z');
    }
    name[index] = '\0';
    return name;
}

double doubleRand(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

int randint(int min, int max){
    return min + rand() % (max - min + 1);
}

typedef struct Book Book;

int main(){

    Book book1;

    

    
    
    randomBooks(book1.title, book1.author, book1.pages, book1.price);
    
    printf("Title: = %s Author = %s Pages = %ls Price = %p/n", book1.title, book1.author, book1.pages, book1.price);

    //qsort();

    return 0;
}