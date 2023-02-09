#include <iostream>
#include <math.h>
using namespace std;


int main() {

  int a, b, soma;

  cout << "Digite o primeiro numero: ";
  cin >> a;
  cout << "Digite o segundo numero: ";
  cin >> b;

  soma = pow(a,2) + pow(b,2);

  cout << "A soma dos quadrado dos numeros é: " << soma;
 
}