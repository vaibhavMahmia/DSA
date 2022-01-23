#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct Queue* q){
    if(q->f == q->r)
        return 1;
    return 0;
}

int isFull(struct Queue* q){
    if(q->r == q->size - 1)
        return 1;
    return 0;
}

void enqueue(struct Queue* q, int value){
    if(isFull(q))
        printf("Que is full !\n");
    else{
        q->r++;
        q->arr[q->r] = value;
    }
}

int deque(struct Queue* q){
    int a = -1;
    if(isEmpty(q))
        printf("Que is empty !\n");
    
    else{
        q->f++;
        a = q->arr[q->f];
    }

    return a;  
}

int main(int argc, char const *argv[]){
    struct Queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 15);

    printf("Dequed element is %d \n", deque(&q));
    

    return 0;
}
