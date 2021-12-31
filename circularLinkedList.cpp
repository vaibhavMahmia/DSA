#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* head){
    struct Node* ptr = head;

    do{
        std::cout << ptr->data << std::endl;
        ptr = ptr->next;
    }
    while(ptr != head);
}

struct Node* insertAtFirst(struct Node* head, int value){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    struct Node* p = head->next;

    while(p->next != head)
        p = p->next;

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

int main(int argc, char const *argv[]){
    
    struct Node* head = (struct Node *)malloc(sizeof(struct Node));
    struct Node* second = (struct Node *)malloc(sizeof(struct Node));
    struct Node* third = (struct Node *)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 7;
    fourth->next = head;

    std::cout << "List before insertion :" << std::endl;
    linkedListTraversal(head);

    head = insertAtFirst(head, 3);
    head = insertAtFirst(head, 2);
    head = insertAtFirst(head, 1);
    head = insertAtFirst(head, 0);

    std::cout << "List after insertion :" << std::endl;
    linkedListTraversal(head);
    
    return 0;
}
