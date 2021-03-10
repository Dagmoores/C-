#include <iostream>

using namespace std;

int main() {
    int matrix[2][3];  //here we use [] the real number of lines and columns
    
    matrix [0][0] = 11; 
//but here, we use [] to define the position, and like in vector, it starts with position 0
    matrix [0][1] = 12;
    matrix [0][2] = 13;

    matrix [1][0] = 21;
    matrix [1][1] = 22;
    matrix [1][2] = 23;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
    cout << endl;
    }

    return 0;
}