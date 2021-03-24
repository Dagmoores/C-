//Pilha Dinâmica = Dynamic Stack

typedef int typeItem;

struct node
{
    typeItem value;
    node* next;
};

class dynamicStack{
    private:
    node* topNode;

    public:
    dynamicStack();
    ~dynamicStack();
    bool itsEmpty();
    bool itsFull();
    void push(typeItem item);
    typeItem pop();
    void print();

};