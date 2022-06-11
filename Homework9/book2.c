
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define COUNT 10

typedef int (*comparef_t)(const void*, const void*);

typedef struct Book {
    char title[151];
    char author[101];
    unsigned pages;
    double price;
} Book;

int randint(int,int);
double randReal(double,double);
char* randomName(char*);
void printBook(const Book*);

int compAuthorASC(const void*, const void*);
int compAuthorDESC(const void*, const void*);
int compTitleASC(const void*, const void*);
int compTitleDESC(const void*, const void*);
int compPagesASC(const void*, const void*);
int compPagesDESC(const void*, const void*);
int compPriceASC(const void*, const void*);
int compPriceDESC(const void*, const void*);


void *linearSearch(const void *key, const void, *base, size_t nitems){
    for(int i = 0; i < nitems; i++){
        if(compar(key, base + i*size)){
            return base + i * size;
        }
    }
}

int main(){
    /*int (*compfunc[])(const void*, const void*) = {
        compAuthorASC,
        compAuthorDESC,
        compPagesASC,
        compPagesDESC,
        compPriceASC,
        compPriceDESC,
        compPriceASC,
        compPriceDESC
    };*/
    comparef_t compfunc[]  = {
        compAuthorASC,
        compAuthorDESC,
        compPagesASC,
        compPagesDESC,
        compPriceASC,
        compPriceDESC,
        compPriceASC,
        compPriceDESC
    };
    //const Book b1 = {.author="Botev", .title="Stihosbirka", .pages=20, .price=34};
    //printBook(&b1);
    srand(time(NULL));
    int opt;
    Book books[COUNT];
    for (int i = 0; i < COUNT; i++){
        randomName(books[i].author);
        randomName(books[i].title);
        books[i].pages = randint(5, 2000);
        books[i].price = randReal(1.0, 1000.0);
    }
    
    scanf("%d", &opt);
    qsort(books, COUNT, sizeof(books[0]), compAuthorASC);

    Book key = {.author = "Vazov", .price = 20.5, .pages = 20, .title = "Pod Igoto"};

    Book *element = bsearch(&key, books, COUNT,  sizeof(*books), compPriceASC);

    if(NULL == element){
        printf("Not found!\n");
    }else{
        printBook(element);
    }

    for (int i = 0; i < COUNT; i++){
        printBook(books + i);
    }
    return 0;
}

int randint(int min, int max){
    return min + rand() % (max - min + 1);
}

double randReal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
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

void printBook(const Book *b){
    printf("Title: %25s ", b->title);
    printf("Author: %25s ", b->author);
    printf("Pages: %4u ", b->pages);
    printf("Price: %4.2lf\n", b->price);
}

int compAuthorASC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    return strcmp(b1->author, b2->author);
}

int compAuthorDESC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    return strcmp(b2->author, b1->author);
}

int compTitleASC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    return strcmp(b1->title, b2->title);
}

int compTitleDESC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    return strcmp(b2->title, b1->title);
}

int compPagesASC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    return b1->pages - b2->pages;
}

int compPagesDESC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    return b2->pages - b1->pages;
}

int compPriceASC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    if (fabs(b1->price - b2->price) < 0.001){
        return 0;
    } else if (b1->price > b2->price){
        return 1;
    }
    return -1;
}

int compPriceDESC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    if (fabs(b1->price - b2->price) < 0.001){
        return 0;
    } else if (b1->price < b2->price){
        return 1;
    }
    return -1;
}