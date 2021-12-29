#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void displayLinkedList(struct Node* head){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    while(ptr != NULL){
        std::cout << ptr->data << std::endl;
        ptr = ptr->next;
    }
}

struct Node* deleteFirst(struct Node* head){
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node* deleteEnd(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    

    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    
    return head;
}

struct Node* deleteIndex(struct Node* head, int index){
    struct Node* p = head;
    struct Node* q = head->next;
    

    for(int i = 0; i < index - 1; i++){
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}

struct Node* deleteAfterNode(struct Node* head, int value){
    struct Node* p = head;
    struct Node* q = head->next;
    
    while(q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;
    }

    if(q->data = value){
        p->next = q->next;
        free(q);
    }

    return head;
}

int main(int argc, char const *argv[]){

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;

    std::cout << "Initial Linked List " << std::endl;
    displayLinkedList(head);

    // head = deleteFirst(head);
    // std::cout << "After Deleting First Node" << std::endl;

    // head = deleteEnd(head);
    // std::cout << "After Deleting Last Node" << std::endl;

    // head = deleteIndex(head, 1);
    // std::cout << "After Deleting Index Node" << std::endl;

    head = deleteAfterNode(head, 30);
    std::cout << "After Deleting Value Of Node" << std::endl;
    displayLinkedList(head);
    return 0;
}
