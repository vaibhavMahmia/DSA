#include<bits/stdc++.h>
#define CAP 100
using namespace std;

void display(int arr[], int n){
    //Traversal
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << std::endl;
    
}

void indDeletion(int arr[], int size, int index){
    for (int i = index; i < size - 1; i++)
        arr[i] = arr[i + 1];
}  

int main(int argc, char const *argv[]){
    int arr[CAP] = {7,8,12,27,88};
    int size = 5, element = 45, index = 3;
    std::cout << "SIZE: " << size << std::endl;
    display(arr, size);
    indDeletion(arr, size, index);
    size--;
    std::cout << "SIZE: " << size << std::endl;
    display(arr, size);
    
    return 0;
}
