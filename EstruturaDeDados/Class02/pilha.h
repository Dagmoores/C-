//pilha = stack

typedef int typeItem;
const int max_itens = 100;

class stack {
    private:
    int size;
    typeItem* structure;

    public:
    stack(); //constructor
    ~stack(); //destructor
    bool itsFull(); //check if the stack is full
    bool itsEmpty(); //check if the stack is empty
    void push(typeItem item); //push itens to the stack
    typeItem pop(); //pop itens
    void printStack(); //print
    int lenght();
};