#include<bits/stdc++.h>
using namespace std;

void displayArray(int * array, int size){
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

int partition(int array[], int low, int high){
    int pivot = array[low];
    int i = low + 1;
    int j = high;
    
    do {
        while(array[i] <= pivot){
            i++;
        }
        while(array[j] > pivot){
            j--;
        }
        if(i < j)
            swap(array[i], array[j]);
    }
    while(i < j);
    swap(array[low], array[j]);
    return j;
}

void quickSort(int array[], int low, int high){
    int partitionIndex;  //index of pivot after partition
    int size = sizeof(array)/sizeof(array[0]);
    int step = 1;
    if(low < high){
        partitionIndex = partition(array, low, high);
        cout<<"Array After Step "<<step<<endl;
        displayArray(array, size);
        quickSort(array, low, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, high);
        step++;
    }
}

int main(int argc, char const *argv[]){
    int array[] = {12,32,23,44,31,56,78,47};
    int size = sizeof(array)/sizeof(array[0]);
    std::cout << "Initial Array:" << std::endl;
    displayArray(array, size);
    quickSort(array, 0, size - 1);
    std::cout << "Finel Array:" << std::endl;
    displayArray(array, size);
    return 0;
}