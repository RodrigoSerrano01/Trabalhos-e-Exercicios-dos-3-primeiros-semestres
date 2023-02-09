#include <iostream>
using namespace std;

int main() {
  
  float salario , vendas, total;

  cout << "Digite seu salario: ";
  cin >> salario;
  cout << "Digite o total de vendas: ";
  cin >> vendas;

  total = salario + (vendas * 0.04);

  cout << "O salario é: "<< salario << "R$ \n";
  cout << "O salario com comissão : "<< total << "R$ \n";


}