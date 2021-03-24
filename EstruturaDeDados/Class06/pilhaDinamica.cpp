#include <iostream>
#include "pilhaDinamica.h"
#include <cstddef> //NULL

using namespace std;

    dynamicStack::dynamicStack()
    {
        topNode = NULL;
    }
    dynamicStack::~dynamicStack()
    {
        node* tempNode;
        while (topNode != NULL) {
            tempNode = topNode;
            topNode = topNode -> next;
            delete tempNode;
        }
    }
    bool dynamicStack::itsEmpty()
    {
        return (topNode == NULL);
    }
    bool dynamicStack::itsFull()
    {
        node* newNode;

        try{
            newNode  = new node;
            delete newNode;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }
    void dynamicStack::push(typeItem item)
    {
        if(itsFull()) {
            cout << "Impossible to add element, the pile is full!\n";
        } else {
            node* newNode = new node;
            newNode -> value = item;
            newNode -> next = topNode;
            topNode = newNode;
        }
    }
    typeItem dynamicStack::pop()
    {
        if(itsEmpty()) {
            cout << "Impossible to remove, the pile is empty!\n";
            return 0;
        } else {
            node* tempNode;
            tempNode = topNode;
            typeItem item = topNode -> value;
            topNode = topNode -> next;
            delete tempNode;
            return item;
        }
    }
    void dynamicStack::print()
    {
        node* tempNode = topNode;
        while (tempNode != NULL) {
            cout << tempNode -> value << " ";
            tempNode =  tempNode -> next;
        }
        cout << endl;
    }