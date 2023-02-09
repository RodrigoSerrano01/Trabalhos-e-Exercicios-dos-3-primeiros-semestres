#include <iostream>
using namespace std;

int main() {
  float nota1, nota2, nota3, media;
  int opc;

  cout << "Digite a primeira nota: ";
  cin >> nota1;
  cout << "Digite a primeira nota: ";
  cin >> nota2;
  cout << "Digite a primeira nota: ";
  cin >> nota3;
  do{
  cout << "Digite a opção de média 1- Aritmética 2- Ponderada ";
  cin >> opc;
  }while(opc != 1 && opc !=2);

  if( opc == 1){
    media = (nota1 + nota2 + nota3) / 3;
  }
  else {
    media = ((nota1 * 3) + (nota2 *3) + (nota3 * 4)) / (3+ 3 +4);
  }
  cout << "Sua média é: "<< media;



}