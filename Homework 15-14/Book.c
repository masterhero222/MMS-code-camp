/*
Направете структура Book, която да има:
Заглавие - до 150 символа;
Автор - до 100 символа;
Брой страници - цяло число;
Цена - реално число.

Да се направи масив от COUNT (предпроцесорна константа) книги.
Да се генерират автоматично произволни данни, с които да се запълни масива от книги.
Ограничения за произволните данни:
Заглавие и име на автора - между 10 и 20 символа, само малки и главни латински букви;
Брой страници - между 5 и 2000;
Цена - между - 1.00 и 1000.00.

Да се запише масива в двоичен файл (binary file). Името на файла да се подава като аргумент от терминала.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define COUNT 10

int compTitleASC(const void*, const void*);
int randint(int, int);
double randReal(double, double);
char* randomName(char*);


typedef struct Book{
    char title[151];
    char author[101];
    unsigned pages;
    double price;

}Book;


typedef struct Node{
    int date;
    struct Node* next;

}node_t;


char* randomName(char* name){
    unsigned index;
    name[index++] = randint('A', 'Z');
    int n = randint(10, 20);
    for(int i = 0; i < n; i++){
        name[index++] = randint('a', 'z');
    }
    name[index++] = ' ';
    n = randint(10, 20);
    name[index++] = randint('A', 'Z');
    for(int i = 0; i < n; i++){
        name[index++] = randint('a', 'z');
    }
    name[index] = '\0';
    return name;
}

int randint(int min, int max){
    return min + rand() % (max - min + 1);
}

double randReal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}


int compTitleASC(const void* bp1, const void* bp2){
    Book* b1 = (Book*)bp1;
    Book* b2 = (Book*)bp2;
    return strcmp(b1->title, b2->title);
}


//Програмата работи и запаметява имената на писателите и книгите в бинарния файл, но не ги отпечатва на конзолата
//Проверих дали се запазват в бинарният файл като компилирах програмата, пуснах я и след това КАТнах информацията
//от бина. прекомпилирах я и повторих същите стъпки. И в двата ката имаше различни имена + шлюкавица. Функцията 
//рандИме() работи когато не подам Книга книга1[БРОЯЧ]. Тоест когато махна -> и го заменя само с . функцията
//работи, но не за масива. Не знам какво е сбъркано тук, отивам за една бира...


int main(){

    srand(time(NULL));
    Book book1[COUNT];

        for(int i = 0; i < COUNT; i++){
        randomName(book1->author);
        randomName(book1->title);
        book1->pages = randint(5, 2000);
        book1->price = randint(1.0, 1000.0);
     }
       

        


        printf("$: %lf\n", book1->price);
        printf("Name: %s\n", book1->author);
        printf("Title: %s\n", book1->title);
        printf("Pages: %d\n", book1->pages);

    
    //Book *bookArr[COUNT];
    unsigned char buffer[100];
    

    FILE *fp;
    fp = fopen("list.bin", "w");
     if(fp == NULL){
        fprintf("Error", strerror);
        return -1;
    }else{
         fwrite(&book1, sizeof(struct Book),COUNT ,fp);
    }
   

     if(fp == NULL){

        fprintf("Error", strerror);
        return -1;

    }else{

        fopen("list.bin", "r");
    fread(buffer, sizeof(buffer),1,fp);

    for(int i = 0; i < 500; i++)
    printf("%u ", buffer[i]);

    }

     //Първата част на програмата е почти успешно направена, + - Някой Фийчъри -"Бъгове" :)

    


    for(int i = 0; i < COUNT; i++){
        compTitleASC(&book1[i], &book1[i+1]);
    }

    for(int i = 0; i < COUNT; i++){
        printf("%p", &book1[i]);
    }
    
       
      
       FILE *fp2;
       fp2 = fopen("newList.bin", "w");
       fwrite(&book1,sizeof(struct Book),COUNT,fp2);
       fprintf("Error", strerror);
    

    free(fp);
    free(fp2);


    return 1;
}