#include <iostream>
using namespace std;
int ANOATUAL = 2021;

int main() {
  
  int ano, mes, semana, dia, anoNasc;

  cout<< "Digite o seu ano de nascimento: ";
  cin >> anoNasc;

  ano =  ANOATUAL - anoNasc;
  mes = ano * 12;
  dia = ano * 365;
  semana = mes *4;


  cout<< "Você tem "<<ano<< " anos de idade.\n";
  cout<< "Você tem "<<mes<< " meses de idade.\n";
  cout<< "Você tem "<<dia<< " dias de idade.\n";
  cout<< "Você tem "<<semana<< " semanas de idade.\n";


}