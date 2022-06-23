#include <stdio.h>
#include <stdlib.h>

#define COUNT 4

typedef struct
{
    int begin;
    int size, max_size;
    int *arr;
} queue;

int myMod(int n, int mod)
{
    n = n % mod;
    return (n >= 0) ? n : n + mod;
}

void initQueue(queue *q)
{
    q->begin = 0;

    q->size = 0;
    q->max_size = COUNT;

    q->arr = (int *)malloc(sizeof(int) * q->max_size);
}

void clearQueue(queue *q)
{
    free(q->arr);
}

void push_back(queue *q, int val)
{
    if(fullQueue(q))
        exit(-1);

    printf("Pushed %d in arr[%d]\n", val, (q->begin + q->size) % q->max_size);
    q->arr[(q->begin + q->size) % q->max_size] = val;
    q->size++;
}

int pop_front(queue *q)
{
    if(emptyQueue(q))
        exit(-1);

    printf("Popped arr[%d] = %d\n", q->begin, q->arr[q->begin]);
    int result = q->arr[q->begin];
    q->begin = (q->begin + 1) % q->max_size;
    q->size--;

    return result;
}

int fullQueue(queue *q)
{
    //printf("(%d, %d)\n", q->size, q->max_size);
    return q->size == q->max_size;
}

int emptyQueue(queue *q)
{
    //printf("(%d, %d)\n", q->size, q->max_size);
    return q->size == 0;
}

int main()
{
    queue q;
    initQueue(&q);

    push_back(&q, 1);
    push_back(&q, 2);
    push_back(&q, 3);
    pop_front(&q);
    pop_front(&q);
    push_back(&q, 4);
    push_back(&q, 1);
    pop_front(&q);
    pop_front(&q);
    pop_front(&q);

    printf("%d\n", fullQueue(&q));
    printf("%d\n", emptyQueue(&q));
    return 0;
}