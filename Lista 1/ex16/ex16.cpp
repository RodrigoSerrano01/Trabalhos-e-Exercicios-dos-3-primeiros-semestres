#include <iostream>

using namespace std;
float PESOQUEIJO = 50, PESOPRESUNTO = 50, PESOCARNE= 100;

int main() {
  
  int quantidade;
  float totalQueijo, totalPresunto, totalCarne;

  cout << "Digite a quantidade de Hamburgers: ";
  cin >> quantidade;
  totalQueijo = (PESOQUEIJO*2)* quantidade;
  totalPresunto = PESOPRESUNTO * quantidade;
  totalCarne = PESOCARNE * quantidade;

  cout << "Total de queijo: "<< totalQueijo << "Kg \n";
  cout << "Total de presunto: "<< totalPresunto << "Kg \n";
  cout << "Total de Carne: "<< totalCarne << "Kg \n";


}