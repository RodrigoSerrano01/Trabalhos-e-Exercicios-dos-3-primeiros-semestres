#include <iostream>
#include <math.h>
using namespace std;

int main() {

  int a, b, c, d, e, base, expo, totalA, totalB,totalC, totalD;

  cout<< "Digite um numero para A: ";
  cin >> a;
  cout<< "Digite um  numero para B: ";
  cin >> b;
  cout<< "Digite um  numero para C: ";
  cin >> c;
  cout<< "Digite um  numero para D: ";
  cin >> d;
  cout<< "Digite um  numero para E: ";
  cin >> e;
  cout<< "Digite a  Base: ";
  cin >> base;
  cout<< "Digite o Expoente: ";
  cin >> expo;

  totalA = (a + b) * c;
  totalB = a - b *(c + pow(d,2))/e;
  totalC = pow(base,expo);
  totalD = a * pow(b,c);

  cout << "Resposta A: "<< totalA << "\n";
  cout << "Resposta B: "<< totalB<< "\n";
  cout << "Resposta C: "<< totalC<< "\n";
  cout << "Resposta D: "<< totalD<< "\n";


}