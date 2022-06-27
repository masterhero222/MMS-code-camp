#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdint.h>

#define ITEMS_COUNT 10




typedef struct Item{
    uint16_t number;
    char description[251];
    double weight;
    double price;
}Item;

typedef struct node {
    Item data;
    struct node* next;
} node_t;


void push(node_t** head, Item value){
    node_t* temp = malloc(sizeof(node_t));
    temp->data = value;
    temp->next = *head;
    *head = temp;
}




int randint(int min, int max){
    return min + rand() % (max - min + 1);
}

double randReal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

char* randomName(char* name){

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

double totalItemsWeight(node_t* items){
    double totallWeight = items->data.weight + items -> data.weight;
    if(totallWeight == 0){
        perror("No weight");
        return -1;
    }
    return totallWeight;

}

double minPriceItem(node_t* items){
    double currPrice = items->data.price;
    double nextPrice = items->next->data.price;
    if(currPrice >= nextPrice){
        currPrice = nextPrice;
    }
    return currPrice;
}




int main()
{

    //1 hour and 45 minutes

   node_t nodes[ITEMS_COUNT];
    node_t* head = NULL;

    srand(time(NULL));
    Item items[ITEMS_COUNT];

    for(int i = 0; i < ITEMS_COUNT; i++){
       items[i].number = randint(1, 100);
       randomName(items[i].description);
       items[i].weight = randReal(0.100, 100.000);
       items[i].price = randReal(1.00, 1500.000);
    }

    for(int i = 0; i < ITEMS_COUNT; i++){
       push(&head, items[i]);
    }



    printf("Total items weight is: %lf Kg\n",totalItemsWeight(items));
    printf("Total items weight is: %lf Lv\n",minPriceItem(items)); //Core dump


    return 0;
}
