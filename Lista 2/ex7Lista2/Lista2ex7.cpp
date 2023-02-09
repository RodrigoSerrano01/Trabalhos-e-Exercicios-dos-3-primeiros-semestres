#include <iostream>
using namespace std;

int main() {

float salario , desc1, desc2, total;

cout << "Digite o salario: ";
cin >> salario;

desc1 = salario * 0.1;
desc2 = salario * 0.05;
total = salario - desc1 - desc2;

cout << "Salario bruto: "<< salario << "\n";
cout << "Desconto de 10%: "<< desc1 << "\n";
cout << "Desconto de 5%: "<< desc2 << "\n";
cout << "Salario liquido: "<< total << "\n";
  
}