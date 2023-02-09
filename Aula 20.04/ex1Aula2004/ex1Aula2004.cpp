#include <iostream>
using namespace std;

int main() {
  int numero, maior, menor;
  
  for(int i = 0; i <=10; i++){
      cout << "Digite um numero: ";
      cin >> numero;
      if(i == 0){
        menor=numero;
        maior = numero;
        }

   if(numero>maior){
     maior = numero;
   }
   if(numero<menor){
     menor = numero;

   }


  }
  cout << "O maior numero é: " << maior <<"\nO menor é: " << menor;
}