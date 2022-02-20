#include<bits/stdc++.h>
using namespace std;

void displayArray(int * array, int size){
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void merge(int A[], int mid, int low, int high){
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high){
        if(A[i] < A[j]){
            B[k] = A[i];
            i++;
            k++;
        }
        else{
            B[k] = A[j];
            j++;
            k++;
        }
    }

    while(i <= mid){
        B[k] = A[i];
        i++;
        k++;
    }
    while(j <= high){
        B[k] = A[j];
        j++;
        k++;
    }

    for(int i = low; i <= high; i++)
        A[i] = B[i];
}

void mergeSort(int A[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}

int main(int argc, char const *argv[]){
    
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    displayArray(A, 7);
    mergeSort(A, 0, 7);
    displayArray(A, 7);

    return 0;
}