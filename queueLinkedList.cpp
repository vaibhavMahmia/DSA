#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node * f = NULL;
struct Node * r = NULL;

void LinkedListTraversal(struct Node *ptr){
    std::cout << "Printing the elements of linked list : " << std::endl;
    while(ptr != NULL){
        std::cout << "Element: " << ptr->data << std::endl;
        ptr = ptr->next;
    }
}

void enqueue(int value){
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    if(n == NULL)
        std::cout << "Queue is full" << std::endl;
    else{
        n->data = value;
        n->next = NULL;
        if(f == NULL)
            f = r = NULL;
        else{
            r->next = n;
            r = n;
        }
    }
}

int dequeue(){
    int value = -1;
    struct Node *ptr = f;
    if(f == NULL)
        std::cout << "Queue is Empty" << std::endl;
    
    else{
        f = f->next;
        value = ptr->data;
        free(ptr);
    }
    return val;
}