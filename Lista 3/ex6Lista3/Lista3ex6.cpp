#include <iostream>
using namespace std;
int A = 50000,B = 30000;

int main() {
  string nome1, nome2, nome3;
  float valor1, valor2, valor3, total,com1,com2,com3;

  cout << "Digite o Nome do primeiro vendedor: ";
  cin >> nome1;
  cout << "Valor vendido pelo primeiro vendedor: ";
  cin >> valor1;
  cout << "Digite o Nome do segundo vendedor: ";
  cin >> nome2;
  cout << "Valor vendido pelo segundo vendedor: ";
  cin >> valor2;
  cout << "Digite o Nome do terceiro vendedor: ";
  cin >> nome3;
  cout << "Valor vendido pelo terceiro vendedor: ";
  cin >> valor3;
  total = valor1 + valor2 + valor3;
  if(valor1 > A || valor2 > A || valor3 > A ){
    com1 = valor1 * 0.12;
    com2 = valor2 * 0.12;
    com3 = valor3 * 0.12;

  }else if(valor1 >= B || valor2 >= B || valor3 >= B){
    com1 = valor1 * 0.095;
    com2 = valor2 * 0.095;
    com3 = valor3 * 0.095;

  }
  else{
    com1 = valor1 * 0.07;
    com2 = valor2 * 0.07;
    com3 = valor3 * 0.07;
  }

  cout << "O vendedor " << nome1 << " vendeu " << valor1 <<"R$ e vai receber " << com1 <<"R$ de comessão \n";
  cout << "O vendedor " << nome2 << " vendeu " << valor2 <<"R$ e vai receber " << com2 <<"R$ de comessão \n";
  cout << "O vendedor " << nome3 << " vendeu " << valor3 <<"R$ e vai receber " << com3 <<"R$ de comessão \n";
  cout << "A empresa recebeu "<< total << "R$";



}