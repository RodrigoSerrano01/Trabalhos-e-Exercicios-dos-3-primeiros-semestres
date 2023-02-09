#include <iostream>
using namespace std;

int main() {

  int compri, altura, largura, volume;

  cout<< "Digite o comprimento do retangulo: ";
  cin >> compri;
  cout<< "Digite a altura do retangulo: ";
  cin >> altura;
  cout<< "Digite a largura do retangulo: ";
  cin >> largura;

  volume = compri * altura * largura;

  cout << "O volume do retangulo é: " << volume <<" metros quadrados.";

  
}