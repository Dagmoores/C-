#include <iostream>
#include "pilhaDinamica.h"

using namespace std;

int main(){

    dynamicStack dynamicStack1;
    int option;
    typeItem item;
    cout << "Program dinamic stack generator\n";

    do {
        cout << endl;
        cout << "Type 0 to stop the program\n";
        cout << "Type 1 to push an element\n";
        cout << "Type 2 to pop an element\n";
        cout << "Type 3 to print the stack\n";
        cin >> option;
        cout << endl;

        if (option == 1){
            cout << "Type the element to be add into the stack: \n";
            cin >> item;
            dynamicStack1.push(item);
        } else if (option == 2){
            item = dynamicStack1.pop();
            cout << "The element to be removed from the stack is: " << item << endl; 
        } else if (option == 3){
            dynamicStack1.print();
        }
    } while (option != 0);

    return 0;
}