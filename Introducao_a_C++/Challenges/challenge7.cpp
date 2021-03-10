//Challenge 7

/* Crie um algoritmo em C++, em que o usuário informa a dimensão de uma
matriz, e os elementos de duas matrizes (ambas com a mesma dimensão) e
o algoritmo mostra a soma entre estas duas matrizes */

#include <iostream>

using namespace std;

int x;
int y;
int w;
int z;

int main() {

  x = 2;
  y = 3;
  w = 2;
  z = 3;
  
  int matrix1[x][y];
  matrix1[0][0] = 11;
  matrix1[0][1] = 12;
  matrix1[0][2] = 13;
  matrix1[1][0] = 14;
  matrix1[1][1] = 15;
  matrix1[1][2] = 16;

   int matrix2[w][z];
  matrix2[0][0] = 17;
  matrix2[0][1] = 18;
  matrix2[0][2] = 19;
  matrix2[1][0] = 10;
  matrix2[1][1] = 11;
  matrix2[1][2] = 12;

  //Matrix 1
  cout << "The dimensions of Matrix One are " << x << " by " << y
    << endl;
  cout << "The Matrix One's elements are: " << endl;
  for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix1[i][j] << " ";
    }
    cout << endl;
  }

  //Matrix 2
  cout << "The dimensions of Matrix Two are " << w << " by " << z
    << endl;
  cout << "The Matrix Two's elements are: " << endl;

  for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix2[i][j] << " ";
    }
    cout << endl;
  }

  //Matrix 1 + Matrix 3
    int a;
    int b;
  
    int matrix3[a][b];
    matrix3[0][0] = matrix1[0][0] + matrix2[0][0];
    matrix3[0][1] = matrix1[0][1] + matrix2[0][1];
    matrix3[0][2] = matrix1[0][2] + matrix2[0][2];
    matrix3[1][0] = matrix1[1][0] + matrix2[1][0];
    matrix3[1][1] = matrix1[1][1] + matrix2[1][1];
    matrix3[1][2] = matrix1[1][2] + matrix2[1][2];

    cout << "The sum of Matrix One and Matrix Two: " <<endl;
    cout << matrix3 << endl;
  
  
  return 0;
}
