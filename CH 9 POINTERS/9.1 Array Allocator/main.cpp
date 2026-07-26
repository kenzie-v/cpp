#include <iostream>

// Function to allocate an array of integers (zeroes) of given size
int *allocateArray(int size) {
    return new int[size];
}

void fillArray(int *arr, int size){
    for(int i=0; i<size; i++){
        *(arr+i) = i;
    }
}

void outputArray(int *arr, int size){
    for(int i=0; i<size; i++){
        std::cout << i << ": " << arr[i] << std::endl;
    }
}

int main() {
    int SZ = 10;
    int *arr = nullptr;
    arr = allocateArray(SZ);

    fillArray(arr, SZ);
    outputArray(arr, SZ);

    delete [] arr;

    return 0;
}