#include<bits/stdc++.h>
using namespace std;

void displayArray(int * array, int size){
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void bubbleSort(int * array, int size){

    int numberOfPass = size - 1;
    int isSorted = 1;
    
    for(int i = 0; i < numberOfPass; i++){
        std::cout << i + 1 << "PASS " << std::endl;
        for(int j = 0; j < numberOfPass - i; j++){
            if(array[j] > array[j + 1]){
                isSorted = 0;
                swap(array[j], array[j + 1]);
            }
        }
        if(isSorted)
            return ;
    }
    

}

int main(int argc, char const *argv[]){
    
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    std::cout << "Before Sort :" << std::endl;
    displayArray(array, size);
    std::cout << "After Sort :" << std::endl;
    bubbleSort(array, size);
    displayArray(array, size);

    return 0;

}