#include <iostream>
using namespace std;

int main() {

  int num1, num2, num3, maior;

  cout<< "Digite o primeiro numero: ";
  cin >> num1;
  cout<< "Digite o segundo numero: ";
  cin >> num2;
  cout<< "Digite o terceiro numero: ";
  cin >> num3;

  if(num1 > num2 && num1 > num3){
    maior = num1;
    }
    else if(num2 > num1 && num2 > num3) {
      maior = num2;
  } 
  else{
    maior = num3;
  }

  cout << "O maior numero é: "<< maior;



  
  
}