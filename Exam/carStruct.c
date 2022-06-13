#include <stdio.h>
#include <stdio.h>
#include <time.h>



typedef struct Car{

    char model[20];
    __uint8_t max_speed;
    double price;

}Car;


compMarkASC(const void*, const void*);
compMarkDESC(const void*, const void*);
compSpeedASC(const void*, const void*);
compSpeedDESC(const void*, const void*);
compPriceASC(const void*, const void*);
compPriceDESC(const void*, const void*);

int main(){
    
struct Car car1, car2;

    car1.max_speed = 360;
    car1.price = 30000;
    strcpy(car1.model, "Supra");

    car2.max_speed = 290;
    car2.price = 26000;
    strcpy(car2.model, "Miata-MX5");

    compMarkASC(car1.model, car2.model);
    compMarkDESC(car1.model, car2.model);
    // compPriceASC(car1.price, car2.price);
    // compPriceDESC(car1.price, car2.price);
    compSpeedASC(car1.max_speed, car2.max_speed);
    compSpeedDESC(car1.max_speed, car2.max_speed);


    

    //printf("Car 1 : %d\nCar 2 : %d", compSpeedASC(car1.max_speed, car2.max_speed));

    
}

int compMarkASC(const void* model_1, const void* model_2){
    
    Car* m1 = (Car*)m1;
    Car* m2 = (Car*)m2;
    return strcmp(m1->model, m2->model);   
}

int compMarkDESC(const void* model_1, const void* model_2){
    
    Car* m1 = (Car*)m1;
    Car* m2 = (Car*)m2;
    return strcmp(m2->model, m1->model); 

    return strcmp(m2, m1);   
}

int compSpeedASC(const void* model_1, const void* model_2){
    
    Car* m1 = (Car*)m1;
    Car* m2 = (Car*)m2;
    return m1->max_speed - m2->max_speed;  
}

int compSpeedDESC(const void* model_1, const void* model_2){
    
    Car* m1 = (Car*)m1;
    Car* m2 = (Car*)m2;
    return m2->max_speed - m1->max_speed; 

       
}

int compPriceASC(const void* model_1, const void* model_2){

    Car* m1 = (Car*)m1;
    Car* m2 = (Car*)m2;
    return m1->price - m2->price; 
}

int compPriceDESC(const void* model_1, const void* model_2){
    
    Car* m1 = (Car*)m1;
    Car* m2 = (Car*)m2;
    return m2->price - m1->price; 
}