#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int element){

    for (int i = 0; i < size; i++)
        if (arr[i] == element)
            return i;
    
    return -1;    
    
}

int binarySearch(int arr[], int size, int element){

    int low, mid, high;
    low = 0;
    high = size - 1;

    // keep searching until low <= high
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == element)
            return mid;
        if(arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;

}

int main(int argc, char const *argv[]){
    // int arr[] = {1,3,5,56,7,8,78};
    // int size = sizeof(arr)/sizeof(int);

    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int searchIndex = binarySearch(arr, size, element);
    std::cout << "The element " << element << " was found at index " << searchIndex << std::endl;
    return 0;
}
