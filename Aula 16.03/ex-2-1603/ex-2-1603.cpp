#include <iostream>
using namespace std;

int main() {

float peso, altura, resultado;

cout << "Digite o seu Peso: ";
  cin>> peso;  
  cout << "Digite o sua altura : ";
  cin>> altura;  

  resultado = peso / (altura * altura);

  if (resultado <= 16 || resultado <= 19.9 ){
    cout << "seu IMC é: "<< resultado << "\nVocê esta abaixo do peso.";
  }
  else if (resultado < 25){
    cout << "seu IMC é: "<< resultado << "\nVocê esta com o  peso normal.";

  }
  else if (resultado < 30){
  cout << "seu IMC é: "<< resultado << "\nVocê esta com sobrepeso.";
    
  }
  else if ( resultado < 40 ) {
cout << "seu IMC é: "<< resultado << "\nVocê esta obeso.";

  }
  else {
    cout << "seu IMC é: "<< resultado << "\nVocê esta com obesidade morbida.";
  }

}