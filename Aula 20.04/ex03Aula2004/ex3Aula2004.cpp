#include <iostream>
using namespace std;

int main() {
  
  int num1, num2, total=0;
  cout << "Digite o primeiro número: ";
  cin >> num1;

  cout << "Digite o segundo número: ";
  cin >> num2;
  

  for(int i = num1; i <= num2; i+=2){

    total += num1 + num2;

  }

  cout << "O total da soma de todos os numeros entre "<<num1 << " e "<< num2<< " é igual a " << total;

}