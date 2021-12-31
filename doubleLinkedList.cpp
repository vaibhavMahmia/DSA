#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void displayLinkedList(struct Node* head){
    struct Node* ptr = head;
    while(ptr != NULL){
        std::cout << ptr->data << std::endl;
        ptr = ptr->next;
    }
}

void displayLinkedListReverse(struct Node* head){
    struct Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    struct Node* tail = ptr;
    while(tail != NULL){
        std::cout << tail->data << std::endl;
        tail = tail->prev;
    }
}


int main(int argc, char const *argv[]){

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;
    second->data = 20;
    second->next = third;
    second->prev = head;
    third->data = 30;
    third->next = NULL;
    third->prev = second;

    std::cout << "Initial Linked List " << std::endl;
    displayLinkedList(head);

    std::cout << "Reverse Linked List" << std::endl;
    displayLinkedListReverse(head);

    return 0;
}