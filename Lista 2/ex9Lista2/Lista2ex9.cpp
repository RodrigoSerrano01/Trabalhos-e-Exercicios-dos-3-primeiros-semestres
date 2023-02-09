/*
Seu nome: Rodrigo Serrano Silveira
Turno: AIM0105 
*/
#include <iostream>
using namespace std;


int main() {

  float valor, dist, imposto, total ;

  cout << "Digite o valor do carro: "<<endl;
  cin >> valor;

  dist = valor + (valor* 0.28);
  imposto = valor + (valor* 0.45);
  total = dist + imposto;

  cout << "Valor sem impostos: " << valor << "R$\n";
  cout << "Valor com porcentagem da fabrica : " << dist << "R$\n";
  cout << "Valor com impostos: " << imposto << "R$\n";
  cout << "Valor total: " << total  << "R$\n";




  
}