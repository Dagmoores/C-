/*
Crie um algoritimo em C++, que tenha uma classe chamada cidadesBrasil, nessa classe, 
escolha os atributos de cada objeto como população, ano de fundação, entre outros. 
*/

#include <iostream>

using namespace std;


class brasilCities {

    private:
        int population;
        int year;
        string acronym;

    public:

        //constructor Function
        brasilCities (int p = 0, int y = 0, string a = NULL) {
            population = p;
            year = y;
            acronym = a;
        };

        /*
        //Population:
        void setPopulation(int p) {
            population = p;
        }
        */
        int getPopulation() {
            return population;
        }
        /*
        //YearOfFoundation:
        void setYearOfFoundation(int y) {
            year = y;
        }
        */
        int getYearOfFoundation() {
            return year;
        }
        /*
        //Acronym
        void setAcronym(string a) {
            acronym = a;
        }
        */
        string getAcronym() {
            return acronym;
        }
};



int main() {

    /*
    brasilCities saoPaulo;
    saoPaulo.setPopulation(12330000);
    saoPaulo.setYearOfFoundation(1909);
    saoPaulo.setAcronym("SP");
    */

    brasilCities saoPaulo(12000000, 1909, "SP");
    cout << "São Paulo \n" << endl;
    cout << "Population: " << saoPaulo.getPopulation() << endl;
    cout << "Year of Foundation: "<< saoPaulo.getYearOfFoundation() << endl;
    cout << "Acronym: " << saoPaulo.getAcronym() << endl;
    cout << endl;

    /*
    brasilCities salvador;

    salvador.setPopulation(2886698);
    salvador.setYearOfFoundation(1549);
    salvador.setAcronym("SSA");


    cout << "Salvador \n" << endl;
    cout << "Population: " << salvador.getPopulation() << endl;
    cout << "Year of Foundation: "<< salvador.getYearOfFoundation() << endl;
    cout << "Acronym: " << salvador.getAcronym() << endl;
    */
    return 0;
}