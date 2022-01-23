#include <bits/stdc++.h>
using namespace std;

struct myStack {
    int size;
    int top;
    int * arr;
};

int isEmpty(struct myStack* ptr){
    if(ptr->top == -1)
        return 1;
    return 0;
}

int isFull(struct myStack* ptr){
    if(ptr->top == ptr->size - 1)
        return 1;
    return 0;
}

void push(struct myStack* ptr, int value){
    if(isFull(ptr) == 1)
        std::cout << "Stack Overflow !" << std::endl;
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

void pop(struct myStack* ptr){
    if(isEmpty(ptr) == 1)
        std::cout << "Stack Underflow !" << std::endl;
    else
        ptr->top--;
}

void displayStack(struct myStack* ptr){
    for(int i = 0; i < ptr->top + 1; i++)
        std::cout << ptr->arr[i] << std::endl;
}

int peek(struct myStack* sp, int i){
    int arrayIndex = sp->top - i + 1;
    if(arrayIndex < 0){
        std::cout << "Not a valid position for the stack !" << std::endl;
        return -1;
    }
    else   
        return sp->arr[arrayIndex];
}

int stackTop(struct myStack* sp){
    return sp->arr[sp->top];
}

int stackBottom(struct myStack* sp){
    return sp->arr[0];
}

int main(int argc, char const *argv[]){
    struct myStack* sp = (struct myStack *)malloc(sizeof(struct myStack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));

    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);
    std::cout << "..Initial Stack.." << std::endl;
    displayStack(sp);

    pop(sp);
    pop(sp);
    std::cout << "..After 2 pop.." << std::endl;
    displayStack(sp);
    std::cout << "Peek 2 : " << peek(sp, 2) << std::endl;

    std::cout << "Stack top : " << stackTop(sp) << std::endl;
    std::cout << "Stack bottom : " << stackBottom(sp) << std::endl;

    return 0;
}
