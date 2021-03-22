#include <iostream>
#include "pilha.h"

using namespace std;
    
stack::stack() //constructor
{
    size = 0;
    structure = new typeItem[max_itens];
}

stack::~stack() //destructor
{
    delete [] structure; //colchetes em razao de se tratar de um vetor
}

bool stack::itsFull() //check if the stack is full
{
    return size == max_itens;
}

bool stack::itsEmpty() //check if the stack is empty
{
    return size == 0;
}

void stack::push(typeItem item) //push itens to the stack
{
    if(itsFull()) {
        cout << "The stack is full, not possible to push" << endl;
    } else {
        structure[size] = item;
        size++;
    }
}

typeItem stack::pop() //pop itens
{
    if(itsEmpty()) {
        cout << "The stack it's empty, not possible to pop" << endl; 
        return 0;
    } else {
        size--;
        return structure[size - 1];
    }
}

void stack::printStack() //print
{
    cout << "Stack: [ ";
    for (int i = 0; i < size; i++) {
        cout << structure[i] << " ";
        
    }
    cout << "]\n";
}

int stack::lenght() //show the lenght of the stack
{
    return size;
}