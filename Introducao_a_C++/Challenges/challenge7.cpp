//Challenge 7

/* Crie um algoritmo em C++, em que o usuário informa a dimensão de uma
matriz, e os elementos de duas matrizes (ambas com a mesma dimensão) e
o algoritmo mostra a soma entre estas duas matrizes */

#include <iostream>

using namespace std;

int x;
int y;
int i2;
int j2;

int main() {

  x = 2;
  y = 3;
  
  int matrix1[x][y];
  matrix1[0][0] = 1;
  matrix1[0][1] = 2;
  matrix1[0][2] = 3;
  matrix1[1][0] = 4;
  matrix1[1][1] = 5;
  matrix1[1][2] = 6;
  
  cout << "The dimension of matrix One are " << x << " by " << y
    << endl;
  cout << "The matrix One is: " << endl;

  for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix1[i][j] << " ";
    }
    cout << endl;
  }

  
  return 0;
}
