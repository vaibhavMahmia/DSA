#include<bits/stdc++.h>
using namespace std;

void displayArray(int * array, int size){
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void selectionSort(int *array, int size){

    int indexOfMinimumElement;
    for(int i = 0; i < size - 1; i++){
        indexOfMinimumElement = i;
        for(int j = i + 1; j < size; j++)
            if(array[j] < array[indexOfMinimumElement])
                indexOfMinimumElement = j;
        swap(array[i], array[indexOfMinimumElement]);
    }

}

int main(int argc, char const *argv[]){
    int array[] = {12,32,23,44,31,56,78,47};
    int size = sizeof(array)/sizeof(array[0]);
    displayArray(array, size);
    selectionSort(array, size);
    displayArray(array, size);
    return 0;
}