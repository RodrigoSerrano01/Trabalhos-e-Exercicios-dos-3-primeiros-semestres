#include <iostream>
using namespace std;

int main() {
  int num1, num2, mult;

  cout << "Digite o primeiro numero: ";
  cin >> num1;
  cout << "Digite o segundo numero: ";
  cin >> num2;

  mult = num1 % num2;

  if(mult != 0 ){
    cout << num1<< " e "<< num2 <<" não são multiplos. ";

  }
  else{
    cout << num1<< " e "<< num2 <<" são multiplos. ";

  }


}