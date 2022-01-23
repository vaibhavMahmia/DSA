#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int startIndex, int endIndex){
    int size = endIndex - startIndex + 1;
    int numberOfPass = size - 1;
    int isSorted = 1;
    
    for(int i = 0; i < numberOfPass; i++){
        for(int j = startIndex; j < numberOfPass - i; j++){
            if(array[j] > array[j + 1]){
                isSorted = 0;
                swap(array[j], array[j + 1]);
            }
        }
        if(isSorted)
            return ;
    }
    

}

float median(int arr[], int startIndex, int endIndex){
    int arraySize = endIndex - startIndex + 1;
    bubbleSort(arr, startIndex, endIndex);
    float median;
    if(arraySize%2 == 0)
        median = (arr[(endIndex+startIndex)/2] + arr[(endIndex+startIndex)/2 + 1])/2;
    else
        median = arr[(endIndex+startIndex)/2];
    
    return median;
}


int main() {
    int arr[] = {4,2,1,8,3,5};
    //sorted {1,2,3,8}
    cout<<median(arr,1,4)<<endl;
    return 0;
}