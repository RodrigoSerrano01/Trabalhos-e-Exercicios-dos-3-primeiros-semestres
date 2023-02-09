#include <iostream>
using namespace std;

int main() {
  
  int num1 , num2 ;
  double total;
  do{
  cout << "Digite o primeiro numero: ";
  cin >> num1;
  cout << "Digite o segundo numero: ";
  cin >> num2;
  }while (num1 ==0 || num2 == 0);

  total = num1 / num2;

  cout << num1 <<" dividido por "<<num2 <<" é igual a: "<<total;




}