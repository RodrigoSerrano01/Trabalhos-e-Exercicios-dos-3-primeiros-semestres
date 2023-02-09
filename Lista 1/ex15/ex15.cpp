#include <iostream>
#include <math.h>
using namespace std;

int main() {

  int raio;
  float area, pi = 3.14;

  cout << "Digite o Raio da pizza: ";
  cin>> raio;

  area = pi * pow(raio,2);

  cout << "A área da pizza é: "<< area << " centimetros quadrados";
 
}