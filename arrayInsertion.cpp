#include<bits/stdc++.h>
#define CAP 100
using namespace std;

void display(int arr[], int n){
    //Traversal
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << std::endl;
    
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity)
        return -1;

    for(int i = size - 1; i >= index; i--)
        arr[i+1] = arr[i];
    
    arr[index] = element;
    
    return 1;
}  

int main(int argc, char const *argv[]){
    int arr[CAP] = {7,8,12,27,88};
    int size = 5, element = 45, index = 3;
    std::cout << "SIZE: " << size << std::endl;
    display(arr, size);
    indInsertion(arr, size, element, CAP, index);
    size++;
    if(indInsertion(arr, size, element, CAP, index) == -1)
        std::cout << "overflow" << std::endl;
    else{
        std::cout << "SIZE: " << size << std::endl;
        display(arr, size);
    }
    return 0;
}
