#include<bits/stdc++.h>
using namespace std;


void displayArray(int * array, int size){
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

int maximum(int A[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
        if(max < A[i])
            max = A[i];
    return max;
}


void countSort(int * A, int n){
    int i, j;
    //find maximum array in A
    int max = maximum(A, n);
    //create the count array
    int* count = (int *)malloc((max + 1)*sizeof(int));

    //initialize the array elements to 0
    for(i = 0; i < max + 1; i++)
        count[i] = 0;

    //Increment the corrosponding index in count array
    for(i = 0; i < n; i++)
        count[A[i]] = count[A[i]] + 1;

    i = 0;//counter for count array
    j = 0;//counter for given array A

    while(i <= max){
        if(count[i] > 0){
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
            i++;
    }
}

int main(int argc, char const *argv[]){
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    displayArray(A, 7);
    countSort(A, 7);
    displayArray(A, 7);
    return 0;
}