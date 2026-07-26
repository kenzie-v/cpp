// 9.2 Test Scores #1 (pg 553 9th)
// 7.25.2026

#include <iostream>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int numScores=3;

    std::cout << "How many scores to grade? " << std::endl;
    std::cin>>numScores;

    int scores[numScores]
    ;
    std::cout<<"Enter the scores: " << std::endl;
    for(int i=0; i<numScores; i++){
        std::cout<<"Score "<<i+1<<": ";
        std::cin>>scores[i];
    }

    sortArray(scores, numScores);

    std::cout << "Sorted scores: ";
    for (int i=0; i<numScores; i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}