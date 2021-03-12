//Challenge10

/* Crie um Algoritmo em C++, que tenha uma função recebe dois ponteiros e
troca o valor de referência entre os dois. */

#include <iostream>

using namespace std;


int main() {

    float a;
    float b;

    float* pointer1;
    float* pointer2;
    float* transitionPointer;

    pointer1 = &a;
    pointer2 = &b;

    cout << "Ref. of pointer1: " << pointer1 << endl;
    cout << "Ref. of pointer2: " << pointer2 << endl;
    
    transitionPointer = pointer1;
    cout << "transition checker: " << transitionPointer << endl;
    pointer1 = pointer2;
    pointer2 = transitionPointer;

    cout << "New Ref. of pointer1: " << pointer1 << endl;
    cout << "Nem Ref. of pointer2: " << pointer2 << endl;

    return 0;
}
