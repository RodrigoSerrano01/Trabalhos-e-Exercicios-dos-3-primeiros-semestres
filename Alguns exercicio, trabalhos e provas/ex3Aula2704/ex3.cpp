#include <iostream>
using namespace std;

int main() {
  int soma= 0;

  for (int i = 85; i <= 907; i++){

    if( i%2 == 0){
      soma += i;
      cout<< i << endl;
    }    
  }
  cout << "A soma dos pares é: "<< soma;


}