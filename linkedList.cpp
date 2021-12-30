#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* insertAtBeginning(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

void insertAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;

    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

}

void insertAtIndex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;
    int i = 0;
    while(i != index - 1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

}

void displayLinkedList(struct Node* head){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    while(ptr != NULL){
        std::cout << "[ (" << ptr->data << ") | (" << &ptr->next << ") ]--->";
        ptr = ptr->next;
    }
    std::cout << "[NULL]" << std::endl;
}

int main(int argc, char const *argv[]){

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;

    std::cout << "Initial Linked List " << std::endl;
    displayLinkedList(head);

    head = insertAtBeginning(head, 5);
    std::cout << "Insert At Beginning " << std::endl;
    displayLinkedList(head);

    insertAtEnd(head, 40);
    std::cout << "Insert At end " << std::endl;
    displayLinkedList(head);

    insertAtIndex(head, 50, 2);
    std::cout << "Insert At index 2 " << std::endl;
    displayLinkedList(head);

    return 0;
}
