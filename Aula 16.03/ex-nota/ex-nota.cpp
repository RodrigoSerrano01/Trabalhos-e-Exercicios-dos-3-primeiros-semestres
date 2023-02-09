#include <iostream>
using namespace std;

int main() {
  float nota;
  cout << "Digite a nota da prova: ";
  cin >> nota;

  if(nota >= 90.0){
  cout << "Conceito A ";

  }
  else if(nota >= 80)
  cout << "Conceito B ";
  else if(nota >= 70)
  cout << "Conceito C ";
  else if(nota >= 60)
  cout << "Conceito D ";
  else{
    cout << "Conceito F ";
  }

}