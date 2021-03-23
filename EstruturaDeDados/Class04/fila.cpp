#include <iostream>
#include "fila.h"

using namespace std;

    queue::queue() //constructor
    {
        first = 0;
        last = 0;
        structure = new typeItem[max_itens];
    }

    queue::~queue() //destructor
    {
        delete [] structure;
    }

    bool queue::itsEmpty() //check if empty
    {
        return (first == last);
    }

    bool queue::itsFull() //check if full
    {
        return (last - first == max_itens);
    }

    void queue::push(typeItem item) //push item
    {
        if(itsFull()) {
            cout << "It's full, impossible to push\n";
        } else{ 
            structure[last % max_itens] = item;
            last++;
        }
    }

    typeItem queue::pop() //pop item
    {
        if(itsEmpty()) {
            cout << "It's empty, impossible to pop\n";
            return 0;
        } else {
            first++;  
            return structure[(first - 1) % max_itens];    
        }
    }

    void queue::print()  //print
    {   cout << "[ ";
        for(int i = first; i < last; i++) {
            cout << structure[i % max_itens] << " "; 
        }
        cout << "]\n";
    }
