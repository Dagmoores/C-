#include <iostream>
#include "fila.h"

using namespace std;

int main(){

    queue queue1;
    int option;
    typeItem item;
    cout << "Program queue generator\n";

    do {
        cout << endl;
        cout << "Type 0 to stop the program\n";
        cout << "Type 1 to push an element\n";
        cout << "Type 2 to pop an element\n";
        cout << "Type 3 to print the queue\n";
        cin >> option;
        cout << endl;

        if (option == 1){
            cout << "Type the element to be add into the queue: \n";
            cin >> item;
            queue1.push(item);
        } else if (option == 2){
            item = queue1.pop();
            cout << "The element to be removed from the queue is: " << item << endl; 
        } else if (option == 3){
            queue1.print();
        }
    } while (option != 0);

    return 0;
}