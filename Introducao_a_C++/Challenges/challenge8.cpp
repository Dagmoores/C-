#include <iostream>

using namespace std;

int x;
int a;

int main() {
int* vector = new int[x]; 
  
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
    
    if (yOrN == "Y") {

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
    } 

    delete [] vector;
  
    return 0;
}
