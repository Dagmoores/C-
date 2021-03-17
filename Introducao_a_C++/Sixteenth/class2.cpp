#include <iostream>

using namespace std;

    class carro {
        private:
            int ano;
            float valor;
            int km;
        
        public:
        //construtor
            carro(int a = 0, float v = -1, int k = -1) {
                ano = a;
                valor = v;
                km = k;
            }
        //get e set
            void setAno(int a) {
            ano = a;
            } 
            int getAno() {
            return ano;
            }
            void setValor(float v) {
                valor = v;
            }
            float getValor() {
            return valor;
            }
            void setKm(int k) {
            km = k;
            }   
            int getKm() {
            return km;
            }
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