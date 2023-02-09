#include <iostream>
using namespace std;

int main() {
  float hora, salarioMinimo, horaExtra, a, b, bruto, extra, total;

  cout << "Digite o total de horas trabalhado: ";
  cin >> hora;

  cout << "Digite o salario minimo: ";
  cin >> salarioMinimo;
  
  cout << "Digite o total de horas extras: ";
  cin >> horaExtra;

 a = salarioMinimo * 0.125;
 b =  salarioMinimo * 0.25;

 bruto = hora * a;
 extra = horaExtra * b;
 total = bruto + extra;

 cout<< "Total a receber: "<< total << "R$ \n";

  
  
}