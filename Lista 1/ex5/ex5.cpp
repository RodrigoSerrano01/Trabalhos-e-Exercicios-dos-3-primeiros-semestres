#include <iostream>
using namespace std;
int main() {
  
  int pao, broa;
  float total, poupanca;

  cout << "Quantidade de Pãos vendidos: ";
  cin >> pao;
  cout << "Quantidade de Broas vendidas: ";
  cin >> broa;

  total = (pao * 0.12) + (broa* 1.50);
  poupanca = total * 0.1;


  cout << "Total vendido no dia: "<< total << " R$\n";
  cout << "Valor para poupança: "<< poupanca<< " R$";
 



}