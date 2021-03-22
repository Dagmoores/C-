#include <iostream>
#include "pilha.h"


using namespace std;

int main() {

    stack stack1;
    typeItem item;
    int option;
    cout << "Program generator of stacks: \n";

    do {
        cout << "Type 0 to stop the program\n";
        cout << "Type 1 to push one element\n";
        cout << "Type 2 to pop one element\n";
        cout << "type 3 to print the stack\n";
        cin >> option;
        if(option == 1){
            cout << "Type the element to push: \n";
            cin >> item;
            stack1.push(item); 
        }else if (option == 2) {
            item = stack1.pop();
            cout << "Element removed: " << item << endl;
        } else if (option == 3) {
            stack1.printStack();
        }


    } while (option != 0);

    return 0;
}