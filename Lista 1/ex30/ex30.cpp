#include <iostream>
using namespace std;

int main() {
  int hora, minuto, total, convMinutos, totalSegundos;

  cout<< "Digite a hora: ";
  cin >> hora;
  cout<< "Digite os minutos: ";
  cin >> minuto;

  convMinutos = hora* 60;
  total = convMinutos + minuto;
  totalSegundos = total* 60;

  cout << "Horas digitas: "<< hora;
  cout << "\nMinutos digitas: "<< minuto;
  cout << "\ntotal de minutos: "<< total;
  cout << "\nTotal de segundos: "<< totalSegundos;
  
}