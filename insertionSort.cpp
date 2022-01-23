#include<bits/stdc++.h>
using namespace std;

void displayArray(int * array, int size){
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void insertionSort(int *array, int size){

    int key, j;
    //Loop for passes
    for(int i = 1; i <= size - 1; i++ ){
        key = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > key){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

}

int main(int argc, char const *argv[]){
    int array[] = {12,32,23,44,31,56,78,47};
    int size = sizeof(array)/sizeof(array[0]);
    displayArray(array, size);
    insertionSort(array, size);
    displayArray(array, size);
    return 0;
}