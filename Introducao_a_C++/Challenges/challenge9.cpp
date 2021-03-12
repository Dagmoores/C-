//Challenge9

/* Crie um Algoritimo em C++ utilizando apenas ponteiros, em que o
usuário informa a idade de duas pessoas, e o Algoritmo informa a 
média destas duas idades. */

#include <iostream>

using namespace std;

int main () {
    
    int age1;
    int age2;
    int* pointerAge1;
    int* pointerAge2;

    //Age 1 request
    cout << "Enter the age of person 1: ";
    cin >> age1;
    cout << endl;

    //Age 2 request
    cout << "Enter the age of person 2: ";
    cin >> age2;
    cout << endl;

    pointerAge1 = &age1;
    pointerAge2 = &age2;

    cout << "The media between the age 1 and the age 2 is: ";
    cout << (*pointerAge1 + *pointerAge2) / 2;
    cout << endl;

  return 0;
}
