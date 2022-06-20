#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define COUNT 10

    


     struct point{

        double point_x;
        double point_y;

    };

    struct Rectangle{
        struct point upper_left;
        struct point lower_right;
    };


    typedef struct node {
        int data;
        struct node* next;
    } node_t;


    void push(node_t** list, int data){
        node_t* n = malloc(sizeof(node_t));
        n->data = data;
        n->next = *list;
        *list = n;
    }


    int calcArea(struct Rectangle rectangle){
        double lenght, breadth;
        lenght = rectangle.lower_right.point_x - rectangle.upper_left.point_x;
        breadth = rectangle.upper_left.point_x - rectangle.lower_right.point_y;
        return lenght*breadth;
    }

    int randNumb(double min, double max){
        return min + ((double)rand() / RAND_MAX) * (max - min);
    }

int main(){



    struct Rectangle rectangle;

    int Rectangle[COUNT];
    node_t* head1 = NULL;

    for(int i = 0; i <= COUNT; i++){
        rectangle.upper_left.point_x = randNumb(1.00, 10.00);
        rectangle.upper_left.point_y = randNumb(1.00, 10.00);
        rectangle.lower_right.point_x = randNumb(1.00, 10.00); 
        rectangle.lower_right.point_y = randNumb(1.00, 10.00);
        
    }
    push(&head1, Rectangle[0]);
    push(&head1, Rectangle[1]);
    push(&head1, Rectangle[2]);
    push(&head1, Rectangle[3]);
    push(&head1, Rectangle[4]);
    push(&head1, Rectangle[5]);
    push(&head1, Rectangle[6]);
    push(&head1, Rectangle[7]);
    push(&head1, Rectangle[8]);
    push(&head1, Rectangle[9]);

    
  
    
    
   
    




    return 0;
}