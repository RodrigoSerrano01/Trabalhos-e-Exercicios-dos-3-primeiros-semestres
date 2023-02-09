#include <iostream>
using namespace std;
float LATA = 0.35 , GARRAFA = 0.6, DOISLITROS = 2;

int main() {

  float total;
  int latas, garrafas, doisLitros;

  cout << "Quantas latas: ";
  cin >> latas;
  cout << "Quantas Garrafas: ";
  cin >> garrafas;
  cout << "Quantas Garrafas de 2 litros: ";
  cin >> doisLitros;

  total = (latas * LATA) + (garrafas * GARRAFA)+ (doisLitros * DOISLITROS);

  cout<< "Total em litros: "<<total <<"L";
  
}