#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
    int size;
    int top;
    char *arr;
};
 
int isEmpty(struct stack *ptr){
    if (ptr->top == -1)
        return 1;

    return 0;
}
 
int isFull(struct stack *ptr){
    if (ptr->top == ptr->size - 1)
        return 1;

    return 0;
}
 
void push(struct stack* ptr, char val){
    if(isFull(ptr))
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int match(char a, char b){
    if(a == '(' && b == ')')
        return 1;
    if(a == '[' && b == ']')
        return 1;
    if(a == '{' && b == '}')
        return 1;
    return 0;
}

int parenthesisMatch(char * exp){
    // Create and initialize the stack
    struct stack* sp;
    sp->size = 20;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char poped_value;
 
    for (int i = 0; exp[i]!='\0'; i++){
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{'){
            push(sp, exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}'){
            if(isEmpty(sp))
                return 0;

            poped_value = pop(sp); 
            if(match(poped_value, exp[i]) != 1)
                return 0;
        }
    }
 
    if(isEmpty(sp))
        return 1;
        
    return 0;
    
}
int main(int argc, char const *argv[]){
    char * exp = "{[((8)(*--$$9))]}";
    // Check if stack is empty
    if(parenthesisMatch(exp))
        printf("The parenthesis is matching");

    else
        printf("The parenthesis is not matching");
    return 0;
}
