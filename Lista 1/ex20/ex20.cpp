#include <iostream>
using namespace std;
float CHIP = 4.00 , ANEL = 3.50;


int main() {
 
  int quantidade;
  float total;

  cout << "Digite a quantidade de frangos: ";
  cin >> quantidade;

  total = (CHIP + (ANEL * 2))*quantidade;

  cout << "Total de Frangos: "<< quantidade <<"R$\n";
  cout << "Valor dos chips e aneis: "<< total <<"R$\n";







}