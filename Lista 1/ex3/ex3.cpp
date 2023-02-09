#include <iostream>
using namespace std;

int main() {
  float base , altura, x;

  cout << "Digite a largura do terreno: ";
  cin >> base;
  cout << "Digite o comprimento do terreno: ";
  cin >> altura;

  x = base* altura;

  cout << "A area do terro é de : "<< x << " metros quadrados";

}