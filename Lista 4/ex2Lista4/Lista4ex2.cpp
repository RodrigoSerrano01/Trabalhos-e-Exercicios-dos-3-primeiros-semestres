#include <iostream>
using namespace std;

int main() {
  int num, aux=0 , resultado;

  do{
    cout<< "Digite um numero: ";
    cin >> num;
    if(num > 10 || num <1){

      cout << "Numero Invalido!!! \n";
      }
      else{
        do{
            aux ++;
            resultado = num * aux;
            cout<< num <<" * " << aux << " = " << resultado << endl;

        }while(aux !=10);

      aux = 0;
      }


  }while (num !=0);


cout << "Fim!!! \n";

}