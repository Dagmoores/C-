//Challenge 7

/* Crie um algoritmo em C++, em que o usuário informa a dimensão de uma
matriz, e os elementos de duas matrizes (ambas com a mesma dimensão) e
o algoritmo mostra a soma entre estas duas matrizes */

#include <iostream>

using namespace std;

int i;
int j;

int main() {

  cout << "Type the number of rows in your matrix: ";
  cin >> i;
  cout << endl;

  cout << "Now, type the number of columns in your matrix: ";
  cin >> j;
  cout << endl;

  cout << "The dimensions of your matrix are " << i << " by " << j
    << endl;
  
  int matrix[i][j];
  
  return 0;
}
