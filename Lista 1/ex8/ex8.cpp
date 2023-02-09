#include <iostream>
using namespace std;

int main() {
  float prato  , kilo = 12.00, total;

  cout << "Digite o peso do prato: ";
  cin >> prato;

  total = prato * kilo;

  cout << "O prato custa "<< total << " R$";
}