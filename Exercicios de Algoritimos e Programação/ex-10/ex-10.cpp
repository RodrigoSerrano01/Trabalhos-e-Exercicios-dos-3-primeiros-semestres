#include <iostream>

using namespace std;


int
main ()
{

  int centena, dezena, unidade, numero;
  do
    {
      cout << "Digite um numero de 1 999: ";
      cin >> numero;
    }
  while (numero <= 0 != numero >= 1000);

  centena = numero / 100;
  dezena = numero % 100;

  unidade = dezena % 10;
  dezena = dezena / 10;


  cout << "Centena: " << centena << "\nDezena: " << dezena << "\nUnidade: " <<
    unidade;



  return 0;


}