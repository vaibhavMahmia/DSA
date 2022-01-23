#include<stdio.h>
#include <stdlib.h>

struct circularQueue {
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct circularQueue * q){
    if(q->f == q->r)
        return 1;
    return 0;
}

int isFull(struct circularQueue * q){
    if((q->r + 1)%q->size == q->f)
        return 1;
    return 0;
}

void enqueue(struct circularQueue * q, int value){
    if(isFull(q))
        printf("Queue is full \n");
    else{
        q->r++;
        q->arr[q->r] = value;
        printf("Enqueued element %d\n", value);
    }
}

int dequeue(struct circularQueue * q){
    int a = -1;
    if(isEmpty(q))
        printf("Queue is empty \n");
    else{
        q->f = (q->f + 1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main(int argc, char const *argv[]){
    
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*)malloc(q.size*sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);

    if(isEmpty(&q))
        printf("Queue is Empty\n");
    if(isFull(&q))
        printf("Queue is Full\n");

    return 0;
}
