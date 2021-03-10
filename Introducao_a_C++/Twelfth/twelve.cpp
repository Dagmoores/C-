#include <iostream>

using namespace std;

int main() {

    //int vet[4];
    //vet[0] = 5;
    //vet[1] = 10;
    //int vet[4] = {5, 10};

    //cout << vet[2] << endl;

    //for(int i = 0; i < 4; i++){
    //    cout << vet[i] << endl;
    //}

    //int x = sizeof(vet); 
    //int y = sizeof(int); //em bytes
    //cout << y << endl;
    //cout << x << endl;

    int vectorSize;
    cout << "Type the vector size: " <<endl;
    cin >> vectorSize;
    int* vector = new int[vectorSize];
    
    for (int i = 0; i < vectorSize; i++) {
        cout << "Type the vector elements" << endl;
        cin >> vector[i];
    }

    return 0;
}