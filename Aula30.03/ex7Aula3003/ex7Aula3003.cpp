#include <iostream>
using namespace std;


int main() {
  int num, count=0, auxPositivo=0, auxNegativo=0, auxNeutro=0;


  do{
    cout<< "Digite um número: ";
    cin >> num;
    count++;
    if(num > 0){

      auxPositivo ++;
    }
    else if(num ==0){
      auxNeutro ++;
    }
  else{
    auxNegativo ++;

  }

  }while(count !=10);

  cout << "\nForam digitados \n";
  cout << "Numeros positivos: " << auxPositivo<< endl;
  cout << "Numeros negativos: " << auxNegativo<< endl;
  cout << "Numeros neutros: " << auxNeutro<< endl;



}