//Challenge 8
/* Crie um algoritmo em C++, que o usuário informa o tamanho
de um vetor, e seus elementos. O algoritmo deve imprimir este vetor
e logo após, perguntar ao usuário se ele quer imprimir outro vetor.
Utilize o delete após a impressão do vetor. */

#include <iostream>

using namespace std;

int x;
int a;

int main() {

    int vector[x]; 
  
    cout << "Type the vector size: ";
      cin >> x;

    for (int i = 0; i < x; i++) {
      cout << "Type the first element of this vector: "; 
        cin >> vector[i];
    }

    cout << "[ ";
      for (int i = 0; i < x; i++) {
      cout << vector[i] << " "; 
    }
    
    cout << "]" << endl;
    
    
    cout << "Do you want to write another vector? type 'Y': ";
    string yOrN;
    cin >> yOrN;
    
    while (yOrN == "y" || "Y") {
    
   
    int vector[a]; 
  
    cout << "Type the vector size: ";
      cin >> a;

    for (int i = 0; i < a; i++) {
      cout << "Type the first element of this vector: "; 
        cin >> vector[i];
    }

    cout << "[ ";
      for (int i = 0; i < a; i++) {
      cout << vector[i] << " "; 
    }
    
    cout << "]" << endl;    

    cout << "Do you want to write another vector? type 'Y': ";
    cin >> yOrN;
    }
    return 0;
}
