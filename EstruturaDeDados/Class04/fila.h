//fila = queue
typedef int typeItem;
const int max_itens = 100;

class queue {
    private:
    int first, last;
    typeItem* structure;

    public:
    queue(); //constructor
    ~queue(); //destructor
    bool itsEmpty(); //check if empty
    bool itsFull(); //check if full
    void push(typeItem item); //push item
    typeItem pop(); //pop item
    void print(); //print
};