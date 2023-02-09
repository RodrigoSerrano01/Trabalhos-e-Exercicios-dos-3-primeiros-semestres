#include <iostream>
using namespace std;

int main() {
  float valor = 0, soma = 0;

  cout<< "Digite o numero para a soma: \n";
  cin >> valor;

  while(valor != 0){
    soma = soma + valor;

    cout<< "O total é: " << soma <<endl;
    cout<< "Digite o numero para a soma: "<<endl;
     cin >> valor;

  }
  cout<< "O total é: " << soma;
}