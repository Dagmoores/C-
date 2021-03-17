#include <iostream>

using namespace std;


class carro{
    
    private:
        int ano;
        float valor, km;

    public:
        //construtor
            carro(int a, float v, int k);
        //get e set
            void setAno(int a);
            int getAno();
            void setValor(float v); 
            float getValor();
            void setKm(int k); 
            int getKm();
};



int main() {

    // palio será o primeiro objeto
    carro palio(1995, 10000, 140000);
    //palio.setAno(1995);
    //palio.setValor(11000);
    //palio.setKm(150000);
    cout << "Palio: \n" << endl;
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Valor: " << palio.getValor() << endl;
    cout << "Km: " << palio.getKm() << endl;
    return 0;
}


//construtor
carro::carro(int a = 0, float v = -1, int k = -1) {
    ano = a;
    valor = v;
    km = k;
}
//get e set
void carro::setAno(int a) {
ano = a;
} 
int carro::getAno() {
return ano;
}
void carro::setValor(float v) {
    valor = v;
}
float carro::getValor() {
return valor;
}
void carro::setKm(int k) {
km = k;
}   
int carro::getKm() {
return km;
}