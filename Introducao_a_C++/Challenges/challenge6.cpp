//Chalenge 6

#include <iostream>

using namespace std;

int familyMoore;
int familySilva;
int familySauro;
int familyLainetti;
int familyLeone;

int main() {

    familyMoore = 55;
    familySilva = 34;
    familySauro = 67;
    familyLainetti = 64;
    familyLeone = 100;

   int Media = (familyMoore + familySilva + familySauro + familyLainetti 
  + familyLeone) / 5;
   cout << "Media: " << Media << endl;

  if (familyMoore > Media) {
    cout << "Family Moore is above the media" << endl;
  } else if (familyMoore == Media) {
    cout << "Family Moore is in the media" << endl;
  } else {
    cout << "Family Moore is under the media" << endl;
  }
  
   if (familySilva > Media) {
    cout << "Family Silva is above the media" << endl;
  } else if (familySilva == Media) {
    cout << "Family Silva is in the media" << endl;
  } else {
    cout << "Family Silva is under the media" << endl;
  }

   if (familySauro > Media) {
    cout << "Family Sauro is above the media" << endl;
  } else if (familySauro == Media) {
    cout << "Family Sauro is in the media" << endl;
  } else {
    cout << "Family Sauro is under the media" << endl;
  }
  
   if (familyLainetti > Media) {
    cout << "Family Lainetti is above the media" << endl;
  } else if (familyLainetti == Media) {
    cout << "Family Lainetti is in the media" << endl;
  } else {
    cout << "Family Lainetti is under the media" << endl;
  }

    if (familyLeone > Media) {
    cout << "Family Leone is above the media" << endl;
  } else if (familyLeone == Media) {
    cout << "Family Leone is in the media" << endl;
  } else {
    cout << "Family Leone is under the media" << endl;
  }

    return 0;
}
