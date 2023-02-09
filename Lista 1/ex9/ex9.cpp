#include <iostream>
using namespace std;
int main() {
  
  int dia , mes, totalDias;

  cout << "Digite o dia: ";
  cin >> dia;

  cout << "Digite o mes: ";
  cin >> mes;


   totalDias = (30 * (mes-1)) + dia;

  cout<< "Desde o começo do ano se passaram " << totalDias <<" Dias ";

}