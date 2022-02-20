#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){

    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void inOrderTraversal(struct Node * root){
    if(root != NULL){
        inOrderTraversal(root->left);
        std::cout << root->data << std::endl;
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(struct Node * root){
    if(root != NULL){
        std::cout << root->data << std::endl;
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct Node * root){
    if(root != NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        std::cout << root->data << std::endl;
    }
}

int main(int argc, char const *argv[]){

    struct Node *p = createNode(2);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);

    p->left = p1;
    p->right = p2;
    std::cout << "INORDER:" << std::endl;
    inOrderTraversal(p);
    std::cout << "PREORDER:" << std::endl;
    preOrderTraversal(p);
    std::cout << "POSTORDER:" << std::endl;
    postOrderTraversal(p);

    return 0;
}