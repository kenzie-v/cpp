#include <iostream>
#include <iomanip>
#include <vector>

int main(int argc, char const *argv[]){
    int row=10;
    int col=10;
    int array[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            std::cout<<i<<j<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}
