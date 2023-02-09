#include <iostream>
using namespace std;

int main() {
  
  int num, aux=0;

  while(num !=9999){

    cout << "Digite um numero: ";
    cin >> num;


    if(num> aux && num != 9999){
      aux= num;
    }

  }
  cout<< "O maior numero digitado foi: "<< aux;

}