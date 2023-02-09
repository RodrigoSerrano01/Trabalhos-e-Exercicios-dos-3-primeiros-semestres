#include <iostream>
using namespace std;

int main() {

  int num, resultado;
  cout << "Digite um número: ";
  cin>> num;
if ( num == 0){

  cout << "Zero é neutro ";
}

else{
    resultado = num % 2 ;

    if (resultado == 0 ){
    cout << "O Numero "<< num << " é par. \n" ;

    }
    else
    cout << "O Numero "<< num << " é impar. \n " ;
  
    if( num >0){
    cout << "O Numero "<< num << " é positivo. \n " ;
    }
    else{
    cout << "O Numero "<< num << " é negativo. \n " ;
    }
  }
}