#include <iostream>
using namespace std;

int main() {
 
 int valores [10];
 string pala;

  for (int i = 0; i < 10; i ++){

    cout<< "Digite um numero:";
    cin >> valores [i];
  }

  cout<< "\nVetor \n";

  for (int i = 0; i < 10; i ++){

    cout << "Posição " << i << " : " << valores[i] << endl;
  }


}