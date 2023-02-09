#include <iostream>
using namespace std;
#include<math.h>
float PI = 3.14;

int main() {
 
  float  raio, altura,volume;

  cout<< "Digite o Raio: ";
  cin >> raio;
  cout<< "Digite o altura: ";
  cin >> altura;

  volume = PI * pow(raio,2) * altura;

  cout <<"O volume do cilindro é "<< volume << " metros cubicos";

}